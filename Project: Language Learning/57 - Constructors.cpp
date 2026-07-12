#include <iostream>

class hero{
    public:
        std::string real_name;
        std::string superhero_name;
        bool fighting_crime;
    
    hero(std::string realID, std::string superID, bool active){
        this->real_name = realID;
        this->superhero_name = superID;
        this->fighting_crime = active;
    }
        
};

void printAttributes(hero info);

int main(){

    /*
        constructor = special method that is automatically called when an object is
        instantiated useful for assigning values to attributes as arguments.
    */

    hero batman("Bruce Wayne", "Batman", true);
    printAttributes(batman);

    return 0;
}

void printAttributes(hero info){
    std::cout << info.real_name << "\n";
    std::cout << info.superhero_name << "\n";
    std::cout << info.fighting_crime << "\n";
}