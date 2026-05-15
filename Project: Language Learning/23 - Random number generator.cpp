#include <iostream>

int main(){
    /*
        pseudo-random = NOT truly random (but close)
    */

    srand(time(NULL));

    // Basic Random Number Gen
    int num = rand();
    std::cout << num << std::endl;

    // Rolled 3 Dice for 3 random numbers
    int blue_dice = (rand() % 6) + 1;
    int red_dice = (rand() % 6) + 1;
    int green_dice = (rand() % 6) + 1;

    std::cout << "Blue Dice:  " << blue_dice << ", ";
    std::cout << "Red Dice:   " << red_dice << ", " ;
    std::cout << "Green Dice: " << green_dice << std::endl;

    return 0;
}
