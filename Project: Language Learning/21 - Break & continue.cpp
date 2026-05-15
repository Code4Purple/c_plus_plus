#include <iostream>

int main(){

    /*
        break     = breaks out of a loop
        continue  = skip the current iteration
    */

    // Tells the user what buttons are on the elavator (after 911)
    for(int i = 1; i <= 15; i++){
        if(i == 13){
            // Since 911 a Floor 13 is bad luck in the USA
            // wE want to skip the 13 but let the user see the rest of the buttons
            continue; 
        }
        std::cout << "Button: " << i << std::endl;
    }

    

    return 0;
}
