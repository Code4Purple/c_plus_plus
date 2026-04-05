#include <iostream>

using namespace std;

int main(){

    int NumberOfPotholes;
    int *ptr;

    ptr = &NumberOfPotholes;
    *ptr = 532587;

    cout << "The number of potholes is: " << NumberOfPotholes << endl;
    return 0;
}