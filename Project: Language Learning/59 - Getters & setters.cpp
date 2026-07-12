#include <iostream>

class Stove{
    private:
        int temperature = 0;
    
    public:
        int getTemperature(){
            return temperature;
        }
        
        void setTemperature(int temperature){
            this->temperature = temperature;
        }
};

int main(){

    /*
        Abstraction = hiding unnecessary data from outside a class
        getter      = function that makes a private attribute READABLE
        setter      = function that makes a private attribute WRITEABLE
    
    */
    int temp;
    Stove stove;

    std::cout << "What temperature will you set the stove to:\n";
    std::cin >> temp;

    //stove.temperature = 1000; // only works if the temperature is public in the class
    stove.setTemperature(temp);
    
    std::cout << "The temperature setting is: " << stove.getTemperature();
    std::cout << "\n";

    return 0;
}