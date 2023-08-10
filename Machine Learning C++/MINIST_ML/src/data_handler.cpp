#include "data_handler.h"

data_handler::data_handler(){
    data_array = new std::vector<data *>;
    test_data = new std::vector<data *>;
    tranning_data = new std::vector<data *>;
    validation_data = new std::vector<data *>;
};
data_handler::~data_handler(){
    // Free Dynamically Allocated Stuff
};

void data_handler::read_feature_vector(std::string path){
    uint32_t header[4]; // Magic Numbers // Number of Images // Row Size // Col Size
    unsigned char bytes[4];

    FILE *f = fopen(path.c_str(), "r");
    if(f){
        for (int i = 0; i < 4; i++){
            if(fread(bytes, sizeof(bytes), 1 , f)){
                header[i] = convert_to_little_endian(bytes);
            }
            std::cout << "DONE -> getting input file header." << std::endl;
            int image_size = header[2] * header[3];
            for(int i = 0; i < header[1]; i++){
                data *d = new data();
                uint8_t element[1];
                for(int j = 0; j < image_size; i++){
                    if(fread(element, sizeof(element), 1 , f)){
                        d->append_to_feature_vector(element[0]);
                    }
                    else {
                        std::cout << "ERROR -> Reading from File" << std::endl;
                        exit(1);
                    }
                }
            }
            data_array->push_back(d);
        }
        std::cout << "DONE -> read and stored " << data_array->size() << " feature vectors." << std::endl; 
    }
    else {
        std::cout << "ERROR -> Couldn't find the file" << std::endl;
        exit(1);
    }
}
void data_handler::read_feature_labels(std::string path){
    uint32_t header[2]; //Magic Numbers // Images
    unsigned char bytes[4];

    FILE *f = fopen(path.c_str(), "r");
    if(f){
        for (int i = 0; i < 2; i++){
            if(fread(bytes, sizeof(bytes), 1, f)){
                header[i] = convert_to_little_endian(bytes);
            }
        }
        std::cout << "DONE -> getting label file header." << std::endl;
        for(int i = 0; i < header[1]; i++){
            uint8_t element[1];
            if(fread(element, sizeof(element), 1, f)){
                data_array->at(i)->set_label(element[0]);
                // Bookmark // https://www.udemy.com/course/machine-learning-in-cpp/learn/lecture/34330060#overview
            }
        }
    }
}
void data_handler::split_data();
void data_handler::count_classes();

uint32_t data_handler::convert_to_little_endian(const unsigned char *bytes){
    return (uint32_t) ((bytes[0] << 24)  |
                        (bytes[1] << 16) |
                        (bytes[2] << 8)  |
                        (bytes[3]));
}
    
std::vector<data *> *data_handler::get_tranning_data(){
    return tranning_data;
}
std::vector<data *> *data_handler::get_test_data(){
    return test_data;
}
std::vector<data *> *data_handler::get_validation_data(){
    return validation_data;
}