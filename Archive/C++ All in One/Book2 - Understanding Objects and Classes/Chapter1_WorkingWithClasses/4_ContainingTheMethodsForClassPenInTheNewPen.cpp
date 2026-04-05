#include <iostream>
#include "3_UsingPrototypesWithTheModifiedPen.h" // Pen.h 

using namespace std;

void Pen::write_on_paper(string words){
    if(InkLevelPercent <= 0){
        cout << "Oops! Out of ink!" << endl;
    }
    else{
        cout << words << endl;
        InkLevelPercent = InkLevelPercent - words.length();
    }
}

void Pen::break_in_half(){
    InkLevelPercent = InkLevelPercent / 2;
    Length = Length / 2.0;
}

void Pen::run_out_of_ink(){
    InkLevelPercent = 0;
}

void statusOfInkLevel(int InkLevelPercent){
    cout << "Ink Level: " << InkLevelPercent << endl;
}

int abilty_to_write(int InkLevelPercent, string WordsContent){
    
    int words_length = WordsContent.length();
    int abilty_to_write = InkLevelPercent - words_length;

    if(abilty_to_write <= 0){
        cout << "Oops! Out of ink!" << endl;
        return -1;
    }
    else{
        cout << "I can write!" << endl;
        return 1;
    }
}

int main(){

    // Use use the Pen Class put some process to show the function working with the above methods
    Pen workingPen;
    workingPen.InkColor = blue;
    workingPen.ShellColor = grey;
    workingPen.CapColor = clear;
    workingPen.Style = ballpoint;
    workingPen.Length = 5.5;
    workingPen.Brand = "Bic";
    workingPen.InkLevelPercent = 100;

    for (int i = 0; i < 10; i++){
        string pharse = "Hello, World!\n";
        
        if(abilty_to_write(workingPen.InkLevelPercent, pharse) == -1){
            workingPen.run_out_of_ink();
            statusOfInkLevel(workingPen.InkLevelPercent);
            break;
        }
        else{
            statusOfInkLevel(workingPen.InkLevelPercent);
            workingPen.write_on_paper(pharse);
        };
    }

    return 0;
}