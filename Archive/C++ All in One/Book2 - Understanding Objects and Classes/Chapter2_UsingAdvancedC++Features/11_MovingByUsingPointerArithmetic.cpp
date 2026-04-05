#include <iostream>

using namespace std;

int main() {
    int Values[5];
    int VSize = sizeof(Values) / sizeof(*Values);
    cout << "Array Count: " << VSize << endl;

    int byValue = 2;
    for (int i = 0; i < VSize; i++) {
        Values[i] = i * byValue;
        //cout << i << " * " << byValue << " = " << Values[i] << endl;
    }

    int *pValues = Values;
    cout << *pValues << endl;
    pValues++;
    cout << *pValues << endl;
    pValues += 5;
    cout << *pValues << endl;
    pValues--;
    cout << *pValues << endl;
    
    return 0;
}