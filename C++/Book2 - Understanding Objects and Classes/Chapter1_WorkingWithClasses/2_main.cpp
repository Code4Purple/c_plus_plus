// Contains Code That Uses the Class Pen

#include <iostream>
#include "1_PenContainsTheClassDescriptionForPen.h" // Class Pen from the header file

using namespace std;

int main() {

    Pen FavoritePen;
    Pen WorstPen;

    FavoritePen.InkColor = blue;
    FavoritePen.ShellColor = grey;
    FavoritePen.CapColor = blue;
    FavoritePen.Style = ballpoint;
    FavoritePen.Length = 5.5;
    FavoritePen.Brand = "Bic";
    FavoritePen.InkLevelPercent = 30;

    WorstPen.InkColor = red;
    WorstPen.ShellColor = red;
    WorstPen.CapColor = black;
    WorstPen.Style = fountain_pen;
    WorstPen.Length = 5.0;
    WorstPen.Brand = "Parker";
    WorstPen.InkLevelPercent = 60;

    cout << "This is my favorite pen... " << endl;
    cout << "Brand: " << FavoritePen.Brand << endl;
    cout << "Ink Color: " << FavoritePen.InkColor << endl;
    cout << "Ink Level: " << FavoritePen.InkLevelPercent << "%" << endl;
    FavoritePen.write_on_paper("Hello, PBD Party!");
    cout << "Ink Level: " << FavoritePen.InkLevelPercent << "%" << endl;    


    cout << "\nThis is my worst pen... " << endl;
    cout << "Brand: " << WorstPen.Brand << endl;
    cout << "Ink Color: " << WorstPen.InkColor << endl;
    cout << "Ink Level: " << WorstPen.InkLevelPercent << "%" << endl;
    WorstPen.write_on_paper("FUCK!");
    cout << "Ink Level: " << WorstPen.InkLevelPercent << "%" << endl;

    return 0;
}