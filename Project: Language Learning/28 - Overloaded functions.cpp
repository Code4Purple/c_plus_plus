#include <iostream>

void whiteRabbit();
void whiteRabbit(std::string name);
void whiteRabbit(std::string name1, std::string name2);

int main(){

    whiteRabbit();
    whiteRabbit("Morpheus");
    whiteRabbit("Agent Smith", "Agent Brown");
    
    return 0;
}

void whiteRabbit(){
    std::cout << "Wake up, Neo...\n";
    std::cout << "The Matrix hasss you...\n";
    std::cout << "Follow the white rabbit.\n";
    std::cout << "Knock, Knock, Neo.\n\n";
}
void whiteRabbit(std::string name){
    std::cout << "Wake up, " << name << "...\n";
    std::cout << "The Matrix hasss you...\n";
    std::cout << "Follow the white rabbit.\n";
    std::cout << "Knock, Knock, " << name << ".\n\n";
}
void whiteRabbit(std::string name1, std::string name2){
    std::cout << "Wake up, " << name1 << " & " << name2 << "...\n";
    std::cout << "The Matrix hasss you both...\n";
    std::cout << "Follow the white rabbit.\n";
    std::cout << "Knock, Knock, " << name1  << " & " << name2 << ".\n";
}
