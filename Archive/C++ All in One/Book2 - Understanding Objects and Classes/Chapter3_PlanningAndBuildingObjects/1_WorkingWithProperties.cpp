#include <iostream>

using namespace std;

class MyDog {
    protected:
        string _Name;
        int _Weight;
        bool _isHealthy = false;
    public:
        // Properties
        string getName() {
            return _Name;
        }
        int getWeight() {
            return _Weight;
        }

        void setWeight(int weight) {
            if (weight > 0){
                _Weight = weight;
            }
        }

        void setIsHealthy(bool isHealthy) {
            if(_Weight > 200) {
                _isHealthy = false;
            }
            else {
                _isHealthy = isHealthy;
            }
        }

        // Methods
        MyDog(string name);
        void DoDogRun();
};

MyDog::MyDog(string Name){
    if(Name.length() == 0){
        throw "Error: Couldn't create MyDog!";
    }

    MyDog::_Name = Name;
}

void MyDog::DoDogRun(){
    if(_isHealthy){
        cout << MyDog::_Name << " is running!" << endl;
    }
    else if (MyDog::_Weight > 200){
        cout << MyDog::_Name << " is too heavy to run!" << endl;
    }
    else {
        cout << MyDog::_Name << " is unhealthy; see vet first!" << endl;
    }
}

int main(){
    MyDog *ThisDog;

    try{
        // Uncomment to generate an error
        // ThisDog = new MyDog("");

        ThisDog = new MyDog("Buddy");
    } catch(const char* msg){
        cerr << msg << endl;
        return -1;
    }

    cout << ThisDog->getName() << " needs exercise." << endl;
    ThisDog->DoDogRun();

    ThisDog->setWeight(100);
    ThisDog->DoDogRun();

    ThisDog->setIsHealthy(true);
    ThisDog->DoDogRun();

    delete ThisDog;
    ThisDog = 0;

    return 0;

}
 
