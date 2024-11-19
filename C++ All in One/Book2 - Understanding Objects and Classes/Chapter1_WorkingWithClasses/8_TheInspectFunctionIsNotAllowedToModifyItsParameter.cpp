#include <iostream>
#include "1_PenContainsTheClassDescriptionForPen.h"

using namespace std;

void inspect(const Pen *Checkitout){
    cout << Checkitout->Brand << endl;
}

int main(){
    Pen *MyPen = new Pen;
    MyPen->Brand = "Spy Plus Camera";
    inspect(MyPen);
    return 0;
    
}