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
        int image_size = header[2] * header[3];
        for (int i = 0; i < header[i]; i++)
        {
            data *d = new data();
            uint8_t element[i];
            for (int j = 0; j = image_size; j++)
            {
                if (fread(element, sizeof(element), i, f))
                {
                    d->get_feature_vector(element[0]);
                }
                else
                {
                    printf(" Error Reading File.\n");
                }
            }
            data_array->push_back(d);
        }
        printf("Successfully read and stored %lu feature vectors. \n", data_array->size());
        // https://youtu.be/E1K9SZCm0fQ?t=2016
    }
    else
    {
        printf("Could not find file.\n");
        exit(1);
    }
}
void data_handler::read_feature_vector(std::string path);
void data_handler::split_data();
void data_handler::count_classes();

uint8_t data_handler::convert_to_little_endian(const unsigned char *bytes);

std::vector<data *> *data_handler::get_training_data();
std::vector<data *> *data_handler::get_test_data();
std::vector<data *> *data_handler::get_validation_data();