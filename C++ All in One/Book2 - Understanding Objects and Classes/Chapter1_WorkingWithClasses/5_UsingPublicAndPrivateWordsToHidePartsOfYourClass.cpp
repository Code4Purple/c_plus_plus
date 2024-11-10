#include <iostream>

using namespace std;

class Oven {
    private:
        void TurnOnHeatingElement();
        void TurnOffHeatingElement();
    public:
        void Bake(int temperature);
};

void Oven::TurnOnHeatingElement(){
    cout << "Heating Element is ON! Becareful!" << endl;
}

void Oven::TurnOffHeatingElement(){
    cout << "Heating Element is off. Relax!" << endl;
}

void Oven::Bake(int temperature){
    TurnOnHeatingElement();
    cout << "Baking..." << endl;
    TurnOffHeatingElement();
}



int main(){
    Oven StandardOven;
    StandardOven.Bake(875);
    return 0;
}