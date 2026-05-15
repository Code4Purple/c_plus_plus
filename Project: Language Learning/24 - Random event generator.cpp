#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int random_number = rand() % 5 + 1;

    switch(random_number){
        case 1:
            std::cout << "You win a bumper sticker!\n";
            break;
        case 2:
            std::cout << "You win a t-shirt!\n";
            break;
        case 3:
            std::cout << "You win a free lunch!\n";
            break;
        case 4: 
            std::cout << "You win a car!\n";
            break;
        case 5:
            std::cout << "You win a gift card!\n";
            break;
    }

    return 0;
}
