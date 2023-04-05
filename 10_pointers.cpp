#include <iostream>

using namespace std;

/*
    Pointers topics
        Creating the Pointers
*/

int main()
{

    // Creating Pointers
    string food = "Pizza"; // A food variable of type string

    cout << endl;
    cout << "The value of the String named food    : " << food << endl;  // Outputs the value of food (Pizza)
    cout << "The memory value of string named food : " << &food << endl; // Outputs the memory address of food (0x6dfed4)

    cout << endl;
    cout << "Referencing food and it's menory location" << endl;
    string food2 = "Pizza"; // A food variable of type string
    string *ptr = &food2;   // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food2 << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food2 << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // dereferencing
    cout << endl;
    cout << "Dereferencing the pointer" << endl;
    string food3 = "Pizza"; // Variable declaration
    string *ptr2 = &food3;  // Pointer declaration

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr2 << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr2 << "\n";

    // Modify Pointers
    cout << endl;
    cout << "Modifying the Pointers" << endl;
    string food4 = "Pizza";
    string *ptr3 = &food4;

    // Output the value of food (Pizza)
    cout << food4 << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food4 << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr3 << "\n";

    // Change the value of the pointer
    *ptr3 = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr3 << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food4 << "\n";
}