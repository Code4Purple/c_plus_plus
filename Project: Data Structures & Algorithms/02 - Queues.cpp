#include <iostream>
#include <queue>

int main(){

    /*
        Queues - FIFO stands for First in, First Out.
        A Collection designed for holding elements prior to processing 
        Linear data structure 
            add = enqueue, offer()
            remove = dequeue, poll()
    */

    std::queue<std::string> carline;

    // added cars to the line
    carline.push("Red Ford");
    carline.push("Blue Tesla");
    carline.push("Pink Tesla");
    carline.push("Red Semi");

    // shows what is in the front of the queue
    std::cout << carline.front() << " <- car #1 \n"; //  shows right now : Red Ford
    
    // shows what is in the back of the queue
    std::cout << carline.back() << "<- last car\n"; // shows right now : Red Semi

    // takes an element out of the queue 
    carline.pop(); // in this case will remove Red Ford
    
    // checks the size of the array 
    std::cout << carline.size() << "<- size of the current away\n"; // should show size of 3 now 

    // checks the queue to see if it is empty 
    std::cout << carline.empty() << "\n"; // will output a 1 if the queue is empty 
    

    return 0;
}
