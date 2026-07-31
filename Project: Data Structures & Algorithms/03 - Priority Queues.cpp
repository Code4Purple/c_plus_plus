#include <iostream>
#include <queue>

int main(){

    /*
        Priority Queue - like a normal queue, but every element has a "priority"
                          instead of strict FIFO order, the highest priority element
                          always comes out first.
                          std::priority_queue is a max-heap by default (biggest on top)
                            push()  to add an element
                            top()   to see the highest priority element
                            pop()   to remove the highest priority element
    */

    std::priority_queue<int> patients;

    // adding patient "severity" scores to the ER queue, higher = more urgent
    patients.push(2);
    patients.push(9);
    patients.push(5);
    patients.push(1);

    // the most urgent patient is always on top, regardless of the order added
    std::cout << patients.top() << " <- most urgent patient (highest number)\n"; // should be 9

    patients.pop(); // removes the 9
    std::cout << patients.top() << " <- next most urgent\n"; // should be 5 now

    std::cout << patients.size() << " <- patients still waiting\n"; // should be 3

    return 0;
}
