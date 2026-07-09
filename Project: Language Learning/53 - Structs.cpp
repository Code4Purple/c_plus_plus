#include <iostream>

struct hero{
    std::string name;
    bool hasPowers;
};

int main(){

    /*
        struct = A structure that group related variables under one name
                 structs can contain many different data types 
                 (string, int, double, bool, etc.)
                 variables in a struct are known as "members"
                 members can be access with. "Class member Access Operator"
    */

    hero batman;
    batman.name = "Bruce Wayne";
    batman.hasPowers = false;

    hero TheFlash;
    TheFlash.name = "Berry Allen";
    TheFlash.hasPowers = true;

    std::cout << batman.name << "\n";
    std::cout << batman.hasPowers << "\n";

    std::cout << TheFlash.name << "\n";
    std::cout << TheFlash.hasPowers << "\n";

    return 0;
}