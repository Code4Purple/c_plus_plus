#include <iostream>

using namespace std;

class Cat {
    public:
        string name;
};

class Dog {
    public:
        string name;
};

class Human {
    public:
        string name;
};

class Door {
    private:
        int HowManyInside;
    public:
        void Start();
        void GoThrough(Cat *acat);
        void GoThrough(Dog *adog);
        void GoThrough(Human *ahuman);
};

void Door::Start(){
    HowManyInside = 0;
}

void Door::GoThrough(Cat *somebody){
    cout << "Welcome, " << somebody->name << endl;
    cout << "A cat just went through the door." << endl;
    HowManyInside++;
}

void Door::GoThrough(Dog *somebody){
    cout << "Welcome, " << somebody->name << endl;
    cout << "A dog just went through the door." << endl;
    HowManyInside++;
}

void Door::GoThrough(Human *somebody){
    cout << "Welcome, " << somebody->name << endl;
    cout << "A human just went through the door." << endl;
    HowManyInside++;
}

int main(){
    Door entrance;
    entrance.Start();

    Cat *SneakyGirl = new Cat;
    SneakyGirl->name = "Sneaky Girl";
    Dog *LittleGirl = new Dog;
    LittleGirl->name = "Maxie";
    Human *Me = new Human;
    Me->name = "John";

    entrance.GoThrough(SneakyGirl);
    entrance.GoThrough(LittleGirl);
    entrance.GoThrough(Me);

    delete SneakyGirl;
    delete LittleGirl;
    delete Me;
    return 0;
}