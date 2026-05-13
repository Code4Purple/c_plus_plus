#include <iostream>

int main(){

    /*
        && = check if two conditions are true
        || = check if at least one of two conditions is true
        !  = reverses the logical state of its operand
    */

    int age;
    bool adult;
    std::cout << "Enter the user age: ";
    std::cin >> age;

    // && Logical
    if(age >= 18 && age <= 122){
        std::cout << "The User can use the website!" << std::endl;
        adult = true;
    }
    else{
        std::cout << "The User is eaither passed away or too young to go onto the webstie!" << std::endl;
    }

    // || Logical
    if(age < 18 || age > 122){
        std::cout << "The User is eaither passed away or too young to go onto the webstie!" << std::endl;
        adult = false;
    }
    else{
        std::cout << "The User can use the website!" << std::endl;
    }

    // ! Logical
    if(!adult){
        std::cout << "Website BLOCKED" << std::endl;
    }

    return 0;
}