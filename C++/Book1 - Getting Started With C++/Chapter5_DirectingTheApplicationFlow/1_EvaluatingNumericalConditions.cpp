#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;


    // Operator of >= greater than or equal to
    if (age >= 18){
        cout << name << " is an adult." << endl;
    } else {
        cout << name << " is a minor." << endl;
    }

    // Operator of <= less than or equal to
    if (age <= 13){
        cout << name << " is a child." << endl;
    } else {
        cout << name << " is a teenager." << endl;
    }

    // Operator of == equal to
    if(age == 25){
        cout << name << " is 25 years old." << endl;
    } else {
        cout << name << " is not 25 years old." << endl;
    }

    // Operator of != not equal to
    if(age != 30){
        cout << name << " is not 30 years old." << endl;
    } else {
        cout << name << " is 30 years old." << endl;
    }

    // Operator of > greater than
    if(age > 20){
        cout << name << " is older than 20 years old." << endl;
    } else {
        cout << name << " is younger than 20 years old." << endl;
    }

    // Operator of < less than
    if(age < 30){
        cout << name << " is younger than 30 years old." << endl;
    } else {
        cout << name << " is older than 30 years old." << endl;
    }
    
}