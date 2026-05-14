#include <iostream>

int main(){

    std::string name;
    std::string name_bk;
    std::string last_name;
    std::cout << "Enter your first name: ";
    std::getline(std::cin,name);
    std::cout << "Enter you last name: ";
    std::getline(std::cin,last_name);

    /* name.length() just allows it to relfect a int number to compare the length of the string 
     to the char size of 12 */
    if(name.length() > 12){ 
        std::cout << "You hit the character limit for your name" <<  std::endl;
    }
    else if (name.empty()){ // name.empty will see if anything was saved to the variable name
        std::cout << "You didnt enter your name" << std::endl;;
    }
    else{
        name_bk = name;
        std::cout << "Welcome " << name << std::endl;
        name.clear(); // clears the saved string variable name 
        std::cout << "Welcome " << name << std::endl;
    }

    // appends to the string's variable name
    
    name_bk.append(" ");
    name_bk.append(last_name);
    std::cout << name_bk << std::endl;
    // find a char within the string
    std::cout << name_bk.at(0) << std::endl;; // should be a B or b
    
    // insert anything into the string at a locate within the string 
    name_bk.insert(0,"@");
    std::cout << name_bk << std::endl;

    // to find the 1st letter and/or space within the string
    std::cout << name_bk.find(" ") << std::endl;

    // this will remove from char zero to char 5 within the string 
    name_bk.erase(0,5);
    std::cout << name_bk << std::endl;
        
    return 0;
}
