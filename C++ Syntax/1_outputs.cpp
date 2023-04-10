#include <iostream>

using namespace std;

int main()
{
    // using namespace std;
    cout << "Hello World!" << endl; // cout is the basic print funcution of c++
                                    // endl; deos end the line of the current output

    // Without using namespace std;
    std::cout << "Hello World!" << endl; // Basic output
    std::cout << "Hello World!\t";       // tabbed ouput command
    std::cout << "Tabbed Hello World!" << endl;
    std::cout << "Hello World!\\" << endl;  // Hello World with backslashes
    std::cout << "\"Hello World\"" << endl; // "Hello World"

    printf("Hello World\n");
    return 0;
}