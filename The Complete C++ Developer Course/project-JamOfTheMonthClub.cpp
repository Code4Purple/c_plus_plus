#include <iostream>


int main(){

    printf("\n      Project: Jam of the Month Club\n");
    
    char package;
    int jelly;
    int bill;

    int monthlyCost;
    int limit;
    int costOverLimit;
    
    std::cout << "What package do you own?";
    std::cout << " A, B, C?" << std::endl;
    std::cin >> package;

    std::cout << "How many jams. jellies, or preserves did you purchase this month?" << std::endl;
    std::cin >> jelly;

    switch(package){
        case 'A':
        case 'a':
            monthlyCost = 8;
            limit = 2;
            costOverLimit = 5;
            if (jelly >= limit){
                bill = ((jelly - 2) * costOverLimit) + monthlyCost;
            }
            else{
                bill = monthlyCost;
            }
            printf("You owe $%d", bill);
            break;
        case 'B':
        case 'b':
            monthlyCost = 12;
            limit = 4;
            costOverLimit = 4;
            if (jelly >= limit){
                bill = ((jelly - 2) * costOverLimit) + monthlyCost;
            }
            else{
                bill = monthlyCost;
            }
            printf("You owe $%d", bill);
            break;
        case 'C':
        case 'c':
            monthlyCost = 15;
            limit = 6;
            costOverLimit = 3;
            if (jelly >= limit){
                bill = ((jelly - 2) * costOverLimit) + monthlyCost;
            }
            else{
                bill = monthlyCost;
            }
            printf("You owe $%d", bill);
            break;
    }
}