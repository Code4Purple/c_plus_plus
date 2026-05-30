#include <iostream>


int main(){

    /*
        sizeof() = determines the size in bytes of a:
                    variable, data type, class, ohjects, etc.
    */

    // The reference of char is 1 byte
    char grade = 'A';
    std::cout << sizeof(grade) << " bytes\n";

    // The size of the array is 5 bytes or 5 elements within in the array
    char grades[] = {'A','B','C','D','F'};
    std::cout << sizeof(grades) << " bytes\n";

    // for example string is a little different to find the elements
    std::string students[] = {"Danny", "Tucker", "Sam"};
    std::cout << sizeof(students) << " bytes\n"; // to show how big are the bytes in the entire array
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n"; // to show how many strings are in the array

    

    return 0;
}



