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
    myHouse.getColor("red");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.getColor("blue");

    printf("My house is %s & it has %d stories with %d windows.", myHouse.getColor() ,myHouse.getNumStories(), myHouse.getNumWindows());
    printf("Your house is %s & it has %d stories with %d windows." , yourHouse.getColor(), yourHouse.getNumStories(), yourHouse.getNumWindows());
}