#include <iostream>

using namespace std;

int main()
{
  try
  {
    int age;
    cout << "What's your age?" << endl;
    cin >> age;
    if (age >= 21)
    {
      cout << "Access granted - you are old enough to enter a bar.";
    }
    else
    {
      throw(age);
    }
  }
  catch (int myNum)
  {
    cout << "Access denied - You must be at least 21 years old to access this location.\n";
    cout << "Your Age is: " << myNum;
  }
}