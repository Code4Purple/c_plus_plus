#include <iostream>

void square(double length);
std::string concatStrings(std::string s1, std::string s2);

int main(){
    /*
        return = return a value back to the spot 
                 where you called the encompassing function
    */
    // one input function
    double length = 5.0;
    double area = square(length); // should return 25.0
    std::cout << "Area: " << area << std::endl;

    // two input function + user input
    std::string first_name;
    std::string last_name;
    std::cout << "Enter your first name: ";
    std::getline(std::cin, first_name);
    std::cout << "Enter your last name: ";
    std::getline(std::cin, last_name);
    std::cout << std::concatStrings(first_name, last_name) << " -- Combined the two strings together!" << std::endl;
    
    return 0;
}

void square(double length){
    double result = length * length;
    return result; // or you can just use return length * length
}

std::string concatStrings(std::string s1, std::string s2){
        std::string full_name = s1 + " " + s2
        return full_name;
}
