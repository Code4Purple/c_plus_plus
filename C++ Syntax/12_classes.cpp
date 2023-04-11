#include <iostream>

using namespace std;

/*
    What are classes
        for example : cars are a class and the types of cars would be objects like audi and volvo or ford
        Topics
            Basic Class Setup and Call
            Class Methods within a Classes
            Class Methods outside of a Classes
            Contructors within Classes
            Access Specifier
            Accessing Pravite Members

*/

// Basic Class
// Create a Car class with some attributes
class Car
{
public:
    string brand;
    string model;
    int year;
};

// Class Methods
class MyClass
{       // The class
public: // Access specifier
    void myMethod()
    { // Method/function defined inside the class
        cout << "MyClass myMethod Call" << endl;
    }
};

// Outside the Class myMethod call
class MyClass2
{
public:
    void myMethod2();
};
void MyClass2::myMethod2()
{
    cout << "Method Called Outside the Class" << endl;
};

// Constructors
class MyCon
{
public:
    MyCon()
    {
        cout << "Contructor Call!" << endl;
    }
};
// Access Specifiers
class PnP
{
public:
    int x;

private:
    int y;
};

// Acessing Pravite info
class pravite1
{
private:
    int salary;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    // Create an object of Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    MyClass myObj;    // Create an object of MyClass
    myObj.myMethod(); // Call the method

    MyClass2 myObj2; // Calls the same as the in class defined method
    myObj2.myMethod2();

    MyCon myObj3; // Call the contructor within the class

    // Access Specifiers
    PnP myObj4;
    myObj4.x = 25;
    // myObj4.y = 25; // You will get a runtime error for the int y from the class due to it labeled as pravite

    // Accessing Pravite Items
    pravite1 myObj5;
    myObj5.setSalary(500);
    cout << myObj5.getSalary();
    cout << endl;

    return 0;
}
