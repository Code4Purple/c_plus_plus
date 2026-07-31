#include <iostream>

/*
    Linked List - a chain of "nodes" where each node holds data + a pointer
                  to the next node. Not stored contiguously in memory like an array.
                    + inserting/removing from the front is O(1), no shifting needed
                    + grows/shrinks dynamically, no fixed size
                    - no random access, to get element #5 you must walk the chain
*/

struct Node {
    std::string data;
    Node* next;
};

int main(){

    // building a tiny 3-car train by hand: head -> BMW -> Tesla -> Ford -> nullptr
    Node* head = new Node{"BMW", nullptr};
    head->next = new Node{"Tesla", nullptr};
    head->next->next = new Node{"Ford", nullptr};

    // walking (traversing) the list from head to tail
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n"; // BMW -> Tesla -> Ford -> nullptr

    // cleaning up what we "new"'d, linked lists don't clean up after themselves
    current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
