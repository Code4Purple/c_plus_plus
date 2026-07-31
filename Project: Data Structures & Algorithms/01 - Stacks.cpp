#include <iostream>
#include <stack>

int main(){

    /*
        stack = LIFO data structure, Last-In  First-Out
                stores objects into a sort of "vertical tower"
                push()  to add to the top
                pop()   to remove from the top 
    */

    
    std::stack<std::string> cars;

    // adds cars to the stack 
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Tesla");

    // to see what is at the top of the stack 
    std::cout << cars.top() << " -> this is your top element\n"; // should be Tesla in this case 

    // to remove a car from the top of the stack 
    cars.pop(); // this should remove Tesla from the stack
    std::cout << cars.top() << " -> this is your top element\n"; // should be Ford now 

    

    return 0;
}
