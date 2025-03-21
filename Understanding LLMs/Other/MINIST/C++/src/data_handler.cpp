#include "../headers/data_handler.h"

data_handler::data_handler(){
    data_array = new std::vector<data *>;
    training_data = new std::vector<data *>;
    testing_data = new std::vector<data *>;
    validation_data = new std::vector<data *>;
}
data_handler::~data_handler(){
    for (auto d : *data_array) {
        delete d;
    }
    delete data_array;
    delete training_data;
    delete testing_data;
    delete validation_data;
}

void data_handler::read_feature_vector(std::string path){
    uint32_t header[4]; // |magic number|number of images|rows-size|columns-size|
    unsigned char bytes[4];
    FILE *file = fopen(path.c_str(), "r");
    if(file){
        for (int i = 0; i < 4; i++){
            if(fread(bytes, sizeof(bytes), 1, file)){
                header[i] = convert_to_little_endian(bytes);
            }
        }
        printf("DONE GETTING INPUT FILE HEADER\n");
        int image_size = header[2] * header[3];
        for (int i = 0; i < header[1]; i++){
            data *d = new data();
            uint8_t element[1];
            for(int j = 0; j <image_size; j++){
                if(fread(element, sizeof(element), 1, file)){
                    d->append_feature_vector(element[0]);
                }
                else{
                    printf("ERROR READING FROM FILE\n");
                    exit(1);
                }
            }
            data_array->push_back(d);
        }
        printf("SUCCESSFULLY READ FEATURE VECTORS. %lu\n", data_array->size());

    }
    else{
        printf("ERROR COULDN'T FIND FILE\n");
        exit(1);
    }

}
void data_handler::read_feature_labels(std::string path){
    uint32_t header[2]; // |magic number|number of images|rows-size|columns-size|
    unsigned char bytes[2];
    FILE *file = fopen(path.c_str(), "r");
    if(file){
        for (int i = 0; i < 2; i++){
            if(fread(bytes, sizeof(bytes), 1, file)){
                header[i] = convert_to_little_endian(bytes);
            }
        }
        printf("DONE GETTING LABEL FILE HEADER\n");
        
        for (int i = 0; i < header[1]; i++){
            uint8_t element[1];
            if(fread(element, sizeof(element), 1, file)){
                data_array->at(i)->set_label(element[0]);
            }
            else{
                printf("ERROR READING FROM FILE\n");
                exit(1);
            }
        }
        printf("SUCCESSFULLY READ LABELS. %lu\n", data_array->size());

    }
    else{
        printf("ERROR COULDN'T FIND FILE\n");
        exit(1);
    }
}
void data_handler::split_data(){
    std::unordered_set<int> used_indexes;
    int training_size = data_array->size() * TRAINING_PERCENT;
    int testing_size = data_array->size() * TESTING_PERCENT;
    int validation_size = data_array->size() * VALIDATION_PERCENT;

    // Training Data
    int count = 0;
    while(count < training_size){
        int index = rand() % data_array->size(); // 0 & data_array->size()
        if(used_indexes.find(index) == used_indexes.end()){
            training_data->push_back(data_array->at(index));
            used_indexes.insert(index);
            count++;
        }
    }
    printf("TRAINING DATA SIZE: %lu\n", training_data->size());

    // Testing Data
    int count = 0;
    while(count < testing_size){
        int index = rand() % data_array->size(); // 0 & data_array->size()
        if(used_indexes.find(index) == used_indexes.end()){
            testing_data->push_back(data_array->at(index));
            used_indexes.insert(index);
            count++;
        }
    }
    printf("TESTING DATA SIZE: %lu\n", testing_data->size());

    // Validation Data
    int count = 0;
    while(count < validation_size){
        int index = rand() % data_array->size(); // 0 & data_array->size()
        if(used_indexes.find(index) == used_indexes.end()){
            validation_data->push_back(data_array->at(index));
            used_indexes.insert(index);
            count++;
        }
    }
    printf("VALIDATION DATA SIZE: %lu\n", validation_data->size());
}
void data_handler::count_classes(){
    int count = 0;
    for(unsigned i = 0; i < data_array->size(); i++){
        if(class_map.find(data_array->at(i)->get_label()) == class_map.end()){
            class_map[data_array->at(i)->get_label()] = count;
            data_array->at(i)->set_emumerated_label(count);
            count++;
        }
    }
    num_classes = count;
    printf("NUMBER OF UNIQUE CLASSES: %d\n", num_classes);
}

uint32_t data_handler::convert_to_little_endian(const unsigned char* bytes){
    return (uint32_t) ((bytes[0] << 24) | 
                        (bytes[1] << 16) | 
                        (bytes[2] << 8) | 
                        (bytes[3]));
}
std::vector<data *> data_handler::get_training_data(){
    return *training_data;
}
std::vector<data *> data_handler::get_testing_data(){
    return *testing_data;
}
std::vector<data *> data_handler::get_validation_data(){
    return *validation_data;
}

int main(){
    // https://youtu.be/E1K9SZCm0fQ?t=3348 @ Bookmark
    data_handler *dh = new data_handler();
    dh->read_feature_vector("data/train-images-idx3-ubyte");
    dh->read_feature_labels("data/train-labels-idx1-ubyte");
    dh->split_data();
    dh->count_classes();
    return 0;
}