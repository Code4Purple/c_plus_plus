#include "include.h"

/*  
    >   greater than
    >=  greater than or equal to
    <   less than
    <=  less than or equal to
    ==  equal-to (equality)
    !=  not-equal-to (equality)

*/

int main(){
    printf("\n       Relational Operators\n"); 
    cout << boolalpha;

    int a = 15;
    int b = 20;

    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
    cout << "Is a less than b ?                 " << (a < b) << endl;
    cout << "Is a greater than b ?              " << (a > b) << endl;
    cout << "Is a less than or equal to b ?     " << (a <= b) << endl;
    cout << "Is a greater than or equal to b ?  " << (a >= b) << endl;
    cout << "Is a not equal to b ?              " << (a != b) << endl;
    cout << "Deos a equals b ?                  " << (a == b) << endl;
        
}