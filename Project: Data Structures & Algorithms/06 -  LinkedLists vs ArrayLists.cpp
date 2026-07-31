#include <iostream>

int main(){

    /*
        Linked List vs Array List (dynamic array) - picking the right tool

        Access by index:
            Array List   -> O(1)   direct memory offset
            Linked List  -> O(n)   must walk from the head

        Insert/remove at the FRONT:
            Array List   -> O(n)   everything after must shift
            Linked List  -> O(1)   just relink a couple pointers

        Insert/remove at the END:
            Array List   -> O(1) amortized (push_back)
            Linked List  -> O(1) if you track a tail pointer, else O(n)

        Memory:
            Array List   -> contiguous, cache-friendly, some wasted capacity
            Linked List  -> scattered, extra memory per node for the pointer(s)

        Rule of thumb:
            - lots of random reads/writes by index          -> array list
            - lots of inserts/removes at the front/middle    -> linked list
    */

    std::cout << "Array List : O(1) access, O(n) insert at front\n";
    std::cout << "Linked List: O(n) access, O(1) insert at front\n";

    return 0;
}
