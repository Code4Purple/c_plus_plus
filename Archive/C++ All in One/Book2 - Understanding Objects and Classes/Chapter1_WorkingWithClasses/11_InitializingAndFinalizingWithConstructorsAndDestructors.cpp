#include <iostream>

using namespace std;

class Walnut{
    public:
        int size;
};

class Squirrel{
    private:
        Walnut *MyDinner;
    public:
        Squirrel();
        ~Squirrel();
};

Squirrel::Squirrel(){
    cout << "Starting!" << endl;
    MyDinner = new Walnut;
    MyDinner->size = 30;
}

Squirrel::~Squirrel(){
    cout << "Ending!" << endl;
    delete MyDinner;
}

int main(){
    Squirrel *Rocky = new Squirrel;
    Squirrel *Bullwinkle = new Squirrel;

    delete Bullwinkle;
    delete Rocky;
    return 0;
}