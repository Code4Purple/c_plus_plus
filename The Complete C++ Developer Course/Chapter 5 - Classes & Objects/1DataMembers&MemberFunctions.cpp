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
    
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("pink");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    // My House print out
    cout << "   My house is " << myHouse.getColor() << " ";
    printf("& it has %d stories with %d windows.\n" ,myHouse.getNumStories(), myHouse.getNumWindows());

    // Your house print out
    cout << " Your house is " << yourHouse.getColor() << " ";
    printf("& it has %d stories with %d windows.\n" ,yourHouse.getNumStories(), yourHouse.getNumWindows());
}