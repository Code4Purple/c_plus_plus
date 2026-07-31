#include <iostream>
#include <queue>

int main(){

    /*
        Queues - FIFO stands for First in, First Out.
    */

    std::queue<std::string> carline;

    carline.push("Red Ford");
    carline.push("Blue Tesla");
    carline.push("Pink Tesla");
    carline.push("Red Semi");

    carline.front();
    carline.back();
    carline.pop();
    carline.size();
    carline.empty();
    

    return 0;
}
