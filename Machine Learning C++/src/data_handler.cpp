#include "data_handler.h"


data_handler::data_handler(){
    data_array = new std::vector<data *>;
    test_data = new std::vector<data *>;
    training_data = new std::vector<data *>;
    validation_data = new std::vector<data *>;
}
data_handler::~data_handler(){
    
    // Free Dynamically Allocated Stuff
}

void data_handler::read_feature_vector(std::string path){
    uint32_t header[4]; // Magic // Num Images // Row Size // Col Size
    unsigned char bytes[4];

    FILE *f = fopen(path.c_str(), "r");
    if(f){
        for(int i = 0; i < 4; i++){
            if(fread(bytes, sizeof(bytes), 1, f)){
                header[i] = convert_to_little_endian(bytes);
            }
            std::cout << "Done getting input file header." << std::endl;
            int image_size = header[2]*header[3];
            for(int i = 0; i < header[i]; i++){
                data *d = new data();
                uint8_t element[1];
                for(int j = 0; j < image_size; j++){
                    if(fread(element, sizeof(element), 1, f)){
                        d->append_to_feature_vector(element[0]);
                    }
                    else {
                        std::cout << "ERROR Reading from File " << std::endl;
                        exit(1);
                    }
                } 
            }
            data_array->push_back(d);
        }
        std::cout << "Successfully read and stored " << data_array->size() << " feature vectors." << std::endl;
    }else{
      std::cout << "Couldn't find the file" << std::endl;
    } 
}
void data_handler::read_feature_labels(std::string path){
    uint32_t header[2]; // Magic // Images
    unsigned char bytes[4];

    FILE *f = fopen(path.c_str(), "r"){
        if(f){
            for(int i = 0; i < 2; i++ ){
                if(fread(bytes, sizeof(bytes), 1, f)){
                    header[i] = convert_to_little_endian(bytes);
                }
            }
            std::cout << "Done getting label file header." << std::endl;
            for (int i = 0; i < header[1]; i++){
                uint8_t element[1];
                if(fread(element, sizeof(element) 1, f)){
                    data_array->at(i)->set_label(element[0]);
                }
            }
        }
    }
}
void data_handler::spilt_data();
void data_handler::count_classes();

uint32_t convert_to_little_endian(const unsigned char *bytes){
    return (uint32_t) ((bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3]);
}

std::vector<data *> *data_handler::get_training_data(){
    return training_data;
}
std::vector<data *> *data_handler::get_test_data(){
    return test_data;
}
std::vector<data *> *data_handler::get_validation_data(){
    return validation_data;
}