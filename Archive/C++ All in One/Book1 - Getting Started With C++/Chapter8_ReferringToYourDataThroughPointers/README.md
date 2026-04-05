In This Chapter:

1. Using two types of memory: the stack and the heap
2. Accessing variables addresses through pointers
3. Creating variables addresses through pointers
4. Taking pointers as parameters and returning pointers


Pointers Notes:
    Avoiding Broken Code:
        1. Dynamic Allocation  : Allows an Application to allocate more memory as needed.
        2. Runtime Polymorphism: Allows an Application to pass pointers that may point to different kinds of data at different times.
        3. Nullable References : Handles instances in which a pointer deosn't point to anything.
        4. Avoding Copies      : Uses a single copy of an object instead of creating multiple copies, which reduces the risk of errors.

#feature <no_pointers> //opt-in to no pointers
#feature <cpp20>       //opt-in to all C++20 features