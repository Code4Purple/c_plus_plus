#include <iostream>

using namespace std;

class Cat {
    private:
        string name;
    public:
        Cat(string name);
        void SayMyName();
};

Cat::Cat(string name){
    cout << "Starting!" << endl;
    this->name = name; // Name = StartName;

}

void Cat::SayMyName(){
    cout << "My name is " << name << endl;
}

int main(){
    Cat *Sam = new Cat("Sam");
    Cat *Luna = new Cat("Luna");

    Sam->SayMyName();
    Luna->SayMyName();

    delete Sam;
    delete Luna;
    return 0;
}