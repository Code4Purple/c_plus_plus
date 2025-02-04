#include "data.h"

data::data(){
    feature_vector = new std::vector<uint8_t>;
    label = 0;
    emum_labael = 0;
}

data::~data(){
    delete feature_vector;
}

void data::set_feature_vector(std::vector<uint8_t> *vect){
    feature_vector = vect;
}
void data::append_feature_vector(uint8_t val){
    feature_vector->push_back(val);
}
void data::set_label(uint8_t val){
    label = val;
}
void data::set_emumerated_label(int val){
    emum_labael = val;
}

int data::get_feature_vector_size(){
    return feature_vector->size();
}
uint8_t data::get_label(){
    return label;
}
uint8_t data::get_emumerated_label(){
    return emum_labael;
}

std::vector<uint8_t> * data::get_feature_vector(){
    return feature_vector;
}