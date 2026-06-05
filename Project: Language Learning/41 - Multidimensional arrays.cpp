#include <iostream>

int main(){
    
    // 3by3 Matrix Example
    std::string heros[][3] = {{"Batman", "The Flash","Superman"},
                              {"Ben 10", "Kevin 11","Plumers"},
                              {"Spiderman", "Iron Man", "Thor"}};

    // 2 methods on the full print out the 3by3 Matrix

    // Hard way by hand print out
    std::cout << heros[0][0] << ", ";
    std::cout << heros[0][1] << ", ";
    std::cout << heros[0][2] << std::endl;

    std::cout << heros[1][0] << ", ";
    std::cout << heros[1][1] << ", ";
    std::cout << heros[1][2] << std::endl;
    
    std::cout << heros[2][0] << ", ";
    std::cout << heros[2][1] << ", ";
    std::cout << heros[2][2] << std::endl;

    // or

    // The for loop() example 
    int rows = sizeof(heros)/sizeof(heros[0]);
    int colums = sizeof(heros[0])/size(heros[0][0]);

    for(int i = 0; i < rows; i++){
       // std::cout << heros[i] << std::endl; // this will only give memory addresses only to the reference of the array
        for(int j = 0; j < colums; j++){
            std::cout << heros[i][j] << " ";
        }
        std::cout << '\n';
    }
    
    return 0;
}
