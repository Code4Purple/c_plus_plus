#include <iostream>
#include <vector>

int main(){

    /*
        Big O notation - describes how an algorithm's runtime (or memory) grows
                          as the input size (n) grows. Worst-case, not exact timing.

            O(1)        constant     - same speed no matter how big n is
            O(log n)    logarithmic  - cuts the problem in half each step (binary search)
            O(n)        linear       - touches every element once
            O(n log n)  linearithmic - efficient sorts (merge sort, quick sort)
            O(n^2)      quadratic    - nested loop over the same data (bubble sort)
    */

    std::vector<int> nums = {4, 8, 15, 16, 23, 42};

    // O(1) - accessing by index takes the same time regardless of vector size
    std::cout << nums[0] << " <- O(1) access\n"; // 4

    // O(n) - has to check every element in the worst case
    int target = 23;
    for (int n : nums) {
        if (n == target) {
            std::cout << target << " <- O(n) linear search found it\n";
            break;
        }
    }

    // O(n^2) - nested loop, work grows with the square of the input
    int comparisons = 0;
    for (size_t i = 0; i < nums.size(); i++) {
        for (size_t j = 0; j < nums.size(); j++) {
            comparisons++;
        }
    }
    std::cout << comparisons << " <- O(n^2) comparisons for n = " << nums.size() << "\n"; // 36

    return 0;
}
