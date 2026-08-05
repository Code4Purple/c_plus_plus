#include <iostream>
#include <vector>
#include <cmath>

class Vector {
    public:
        Vector(std::initializer_list<double> elements) : data(elements) {}

        double magnitude(){
            double sum = 0;
            for (double value : data){
                sum += value * value;
            }
            return std::sqrt(sum);
        }

        void display() {
            for (double value : data) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }
    
    private:
        std::vector<double> data;
};

int main(){
    Vector v = {3.0, 4.0};
    std::cout << "Vector: ";
    v.display();
    std::cout << "Magnitude: " << v.magnitude() << "\n";

    return 0;
}