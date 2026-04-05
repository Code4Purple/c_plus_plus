#include <iostream>

using namespace std;

class Cheese{
    public:
        string status;
        void eat();
        void rot();
};

int CheeseCount;

void OneMoreCheeseGone(Cheese *Block){
    CheeseCount--;
    Block->status = "Gone";
};

void Cheese::eat(){
    status = "Eaten";
    OneMoreCheeseGone(this);
};

void Cheese::rot(){
    status = "Rotten";
    OneMoreCheeseGone(this);
}

int main(){
    Cheese *Gouda = new Cheese();
    Cheese *Brie = new Cheese();

    CheeseCount = 2;
    Gouda->eat();
    Brie->rot();

    cout << "Cheese count: " << CheeseCount << endl;
    cout << "Gouda Status: " << Gouda->status << endl;
    cout << "Brie Status: " << Brie->status << endl;
    return 0;
}