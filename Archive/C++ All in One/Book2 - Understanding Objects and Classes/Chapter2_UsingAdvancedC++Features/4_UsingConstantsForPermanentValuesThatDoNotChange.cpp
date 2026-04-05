#include <iostream>

using namespace std;

const int ParkingSpaces = 80;
const string StoreName = "Joe's Food Haven";
const float pi = 3.1415926;

int main(){
    // Start of the Message
    cout << "Important Message...\n" << endl;
    cout << "Here at " << StoreName << endl;
    cout << "we believe you should know" << endl;
    cout << "that we have " << ParkingSpaces;
    cout << "full-sized" << endl;
    cout << "parking spaces for your parking" << endl;
    cout << "pleasure.\n" << endl;
    

    // Middle of the Message
    cout << "We do realize that parking" << endl;
    cout << "is tight at Joe's Food Haven" << endl;
    cout << "and so we are going to double our" << endl;
    cout << "parking spaces from " << ParkingSpaces  << " to "  << ParkingSpaces * 2 << "." ;
    cout << " Thank you again!\n" << endl;

    // End of the Message
    float radius = 5.0;
    float area = radius * radius * pi;
    cout << "And remember, we sell 5 radius inch apple pies" << endl;
    cout << "for a full " << area << endl;
    cout << "inches of eating pleasure!" << endl;
    
}