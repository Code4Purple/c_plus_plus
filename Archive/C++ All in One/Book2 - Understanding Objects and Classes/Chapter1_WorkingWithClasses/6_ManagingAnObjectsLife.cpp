// File Name Edited: 6_ManagingAnObject'sLife.cpp

#include <iostream>
#include "1_PenContainsTheClassDescriptionForPen.h"
using namespace std;

int main(){
    Pen *MyPen;         // Declare the pointer
    MyPen = new Pen;    // Call new, Passing the class name
    MyPen->InkColor = red;

    cout << MyPen->InkColor << endl;
    delete MyPen;
    MyPen = 0;
    return 0;


}