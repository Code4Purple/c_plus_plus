#include "include.h"

class House{
    public: 
        void setNumStories(int numStories){
            this->numStories = numStories;
        }

        void setNumWindows(int numWindows){
            this->numWindows = numWindows;
        }

        void setColor(string color){
            this->color = color;
        }

        int getNumStories() const {
            return numStories;
        }

        int getNumWindows() const {
            return numWindows;
        }

        string getColor() const {
            return color;
        }
    
    private:
        int numStories;
        int numWindows;
        string color;

};

int main(){
    
    // Setting Classes to a Name
    House myHouse;
    House yourHouse;

    // Setting Data
    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("pink");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    // My House print out
    cout << "\n   My house is " << myHouse.getColor() << " "; // Had to use two different print outs due to the basic prinf statement not giving the sting value to the console
    printf("& it has %d stories with %d windows.\n" ,myHouse.getNumStories(), myHouse.getNumWindows());

    // Your house print out
    cout << "\nYour house is " << yourHouse.getColor() << " "; // Had to use two different print outs due to the basic prinf statement not giving the sting value to the console
    printf("& it has %d stories with %d windows.\n\n" ,yourHouse.getNumStories(), yourHouse.getNumWindows());
}