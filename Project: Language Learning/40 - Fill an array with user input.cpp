#include <iostream>

int main(){

    std::string heros[5];
    int size = sizeof(heros)/sizeof(heros[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Enter a Superhero #" << i + 1 << ": ";
        getline(std::cin,heros[i]);
        if(heros[i] == "q"){
            break;
        }
    }
    
    std::cout << "Your superheros team of 5 are..." << std::endl;
    for (std::string hero : heros){
        if(hero == "q" ){
            break;
        }
        std::cout << "---> " << hero << std::endl;
    }   
    return 0;
}