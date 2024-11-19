// Edited Name: 7_ManagingAnObject'sLifeUsingSmartPointers.cpp

#include <iostream>
#include "1_PenContainsTheClassDescriptionForPen.h"


using namespace std;

int main(){
    unique_ptr<Pen> MyPen;
    MyPen.reset(new Pen());
    MyPen->InkColor = red;
    cout << MyPen->InkColor << endl;
    MyPen.reset();
    return 0;
}