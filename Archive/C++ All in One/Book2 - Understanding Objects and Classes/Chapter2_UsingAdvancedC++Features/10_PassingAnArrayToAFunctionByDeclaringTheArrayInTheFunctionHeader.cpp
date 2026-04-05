#include <iostream>

using namespace std;

const int ArraySize = 10;

void Crunch(int myArray[], int ArraySize){
    for (int i = 0; i < ArraySize; i++) {
        cout << myArray[i] << endl;
    }
}

int main(){
    int BigArray[ArraySize];

    for (int i = 0; i < ArraySize; i++) {
        BigArray[i] = i * 2;
    }

    Crunch(BigArray, ArraySize);
    return 0;
}