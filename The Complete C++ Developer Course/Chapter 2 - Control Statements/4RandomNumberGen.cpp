#include  "include.h"

int main(){

    // Basic Random Number Gen
    srand(time(nullptr));

    int val1 = rand() % 10; // val1 will be ->  >= 0 and < 10
    //shift it by 1
    int val2 = rand() % 10 + 1; // val2 will be ->  >=1 and <=10
    
    printf("\n        Basic Random Number Generator\n");
    std::cout << "Generate 2 Random Numbers: "<< val1 << " & " << val2 << std::endl;
}