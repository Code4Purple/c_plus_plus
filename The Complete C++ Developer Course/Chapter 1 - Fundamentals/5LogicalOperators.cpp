#include "include.h"

int main(){
    printf("\n      Logical Operators\n");

        bool isRaining = true;
        bool isWarm =  false;

        cout << boolalpha;
        cout << "And:   " << (isRaining && isWarm) << endl;
        cout << "OR:    " << (isRaining || isWarm) << endl;
        cout << "Not:   " << (!isRaining) << endl;

    return 0;   
}