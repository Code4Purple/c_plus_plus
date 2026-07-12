#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This " << name <<" is eating\n";
        }
        void drink(){
            std::cout << "This " << name << " is drinking\n";
        }
        void sleep(){
            std::cout << "This " << name << " is sleeping\n";
        }
};

int main(){

    /*
        object = A collection of attributes and methods
                 They can have characteristics and could peform actions
                 Can be used to mimic read world items (ex. Phone, Book, Dog)
                 Created from a class which acts as a "blue-print"
    */

    Human human1;
    
    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;
    
    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << "\n";

    Human human2;
    human2.name = "Morty";
    human2.occupation = "student";
    human2.age = 14;

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}