#ifndef __DATA_H
#define __DATA_H

#include <vector>
#include "stdint.h"
#include "stdio.h"

class data{
    std::vector<uint8_t> * feature_vector; // No class at the end.
    uint8_t label;
    int emum_labael; // A -> 1, B ->

    public:
        data();
        ~data();
        void set_feature_vector(std::vector<uint8_t> *);
        void append_feature_vector(uint8_t);
        void set_label(uint8_t);
        void set_emumerated_label(int);

        int get_feature_vector_size();
        uint8_t get_label();
        uint8_t get_emumerated_label();

        std::vector<uint8_t> * get_feature_vector();



};

#endif