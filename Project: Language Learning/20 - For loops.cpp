#include <iostream>

int main(){

    // Basic Loop Example
    for(int i = 1; i <= 3; i++){
        // Prints out Count 1 for example
        std::cout << "Count " << i << std::endl;
    }

    /*
        Remind there ARE differnt was to do the 3rd part of the for loop: i++
            A) i--   | will take on away from the i instead of adding one like i++
            b) i-=2  | will subtract two from the i int variable for the loop
            c) i*=2  | will count with i * 2 = new i for the loop
            d) i* /2 | same as the c but the other way 
    
    */

    return 0;
}
