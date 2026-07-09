#include <iostream>

struct car{
    std::string make;
    std::string model;
    std::string color;
    int year;
};

void printCar(car car);
void paintCar(car &car, std::string color);

int main(){

    car car1;
    car car2;

    car1.year = 2026;
    car1.color = "Black";
    car1.make = "Ford";
    car1.model = "Mustang";

    car2.year = 1969;
    car2.color = "Cherry Red";
    car2.make = "Ford";
    car2.model = "Mustang";
    
    paintCar(car1, "Navy Blue");

    printCar(car1);
    printCar(car2);

    return 0;
}

// remember that the car in the function is just a copy of the original car
// if you need the original one just use the &car for the fucntion to use the correct memory address for it
void printCar(car car){
    std::cout << car.year << " ";
    std::cout << car.color << " ";
    std::cout << car.make << " ";
    std::cout << car.model << "\n";
}

void paintCar(car &car, std::string color){
    car.color = color;
}