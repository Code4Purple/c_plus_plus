#include <iostream>
#include <vector>

int main(){

    /*
        Dynamic Array - an array that can grow/shrink at runtime.
                         std::vector is C++'s built-in dynamic array.
                         Under the hood: when it runs out of room, it allocates a
                         bigger block (usually ~2x) and copies everything over.
                            push_back()  add to the end, amortized O(1)
                            size()       how many elements are actually in use
                            capacity()   how much room is currently allocated
    */

    std::vector<std::string> garage;

    std::cout << "starting capacity: " << garage.capacity() << "\n"; // usually 0

    garage.push_back("Civic");
    garage.push_back("Mustang");
    garage.push_back("Model 3");

    std::cout << "size: "     << garage.size()     << "\n"; // 3, elements in use
    std::cout << "capacity: " << garage.capacity() << "\n"; // >= 3, room allocated

    // random access is O(1), unlike a linked list
    std::cout << garage[1] << " <- accessed instantly by index\n"; // Mustang

    // removing the last element
    garage.pop_back();
    std::cout << garage.size() << " <- size after pop_back()\n"; // 2

    return 0;
}
