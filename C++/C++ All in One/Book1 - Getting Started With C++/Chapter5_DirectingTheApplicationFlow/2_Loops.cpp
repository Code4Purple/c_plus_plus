#include <iostream>

using namespace std;


int main(){

    //  For loop -> Going through a list of numbers by adding 1 to the previous number
    cout << "For Loop      -> Counting up to 10:        ";
    for (int i = 0; i <= 10; i++){
        cout << i << " ,";
    }
    cout << endl;

    cout << "For Loop      -> Counting down from 10:    ";
    //  For loop -> Going through a list of numbers by subtracting 1 from the previous number
    for (int i = 10; i >= 0; i--){
        cout << i << " ,";
    }
    cout << endl;

    // while loop -> Going through a list of numbers by adding 1 to the previous number
    cout << "While Loop    -> Counting up to 10:        ";
    int d = 0;
    while (d <= 10){
        cout << d << " ,";
        d++;
    }
    cout << endl;

    // while loop -> Going through a list of numbers by subtracting 1 from the previous number
    cout << "While Loop    -> Counting down from 10:    ";
    int e = 10;
    while (e >= 0){
        cout << e << " ,";
        e--;
    }
    cout << endl;

    // do while loop -> Going through a list of numbers by adding 1 to the previous number
    cout << "Do While Loop -> Counting up to 10:        ";
    int f = 0;
    do {
        cout << f << " ,";
        f++;
    } while (f <= 10);
}