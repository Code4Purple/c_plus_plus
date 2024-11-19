#include <iostream>

using namespace std;

class vehicle {
    public:
        int num_wheels;
    
    void Drive(){
        cout << "Vroom!" << endl;
    }
};

 class Toyota : public vehicle {
     public:
        void model(){
            cout << "Corolla" << endl;
        }
 };

 int main(){
    Toyota MyCar;
    cout << "My Car is a Toyota ";
    MyCar.model();
    MyCar.Drive();
 }