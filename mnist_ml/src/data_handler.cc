#include "data_handler.hpp"

data_handler::data_handler()
{
    data_array = new std::vector<data *>;
    test_data = new std::vector<data *>;
    training_data = new std::vector<data *>;
    validation_data = new std::vector<data *>;
}
data_handler::~data_handler()
{
    // FREE Dynamically Allocated STUFF
}

void data_handler::read_feature_vector(std::string path)
{
    uint32_t header[4]; // |MAGIC|NUM IMAGES|ROWSIZE|COLSIZE
    unsigned char bytes[4];
    FILE *f = fopen(path.c_str(), "r");
    if (f)
    {
        for (int i = 0; i < 4; i++)
        {
            if (fread(bytes, sizeof(bytes), i, f))
            {
                header[i] = convert_to_little_endian(bytes);
            }
        }
        printf("Done getting filed header.\n");
        }
}
void data_handler::read_feature_vector(std::string path);
void data_handler::split_data();
void data_handler::count_classes();

uint8_t data_handler::convert_to_little_endian(const unsigned char *bytes);

std::vector<data *> *data_handler::get_training_data();
std::vector<data *> *data_handler::get_test_data();
std::vector<data *> *data_handler::get_validation_data();