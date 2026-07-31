#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

int main(){

    /*
        Measuring execution time - use std::chrono to see how long code actually
                                    takes to run, useful for comparing algorithms
                                    (e.g. bubble sort vs std::sort) in practice,
                                    not just in theoretical Big O terms.
                                        high_resolution_clock::now()  grabs a timestamp
                                        duration_cast<...>            converts to a unit
    */

    std::vector<int> nums;
    for (int i = 100000; i > 0; i--) {
        nums.push_back(i); // 100,000 elements, worst case (reverse sorted)
    }

    auto start = std::chrono::high_resolution_clock::now();

    std::sort(nums.begin(), nums.end()); // O(n log n)

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "sorted " << nums.size() << " elements\n";
    std::cout << elapsed.count() << " microseconds <- how long std::sort took\n";
    std::cout << nums.front() << " ... " << nums.back() << " <- confirms it's sorted\n"; // 1 ... 100000

    return 0;
}
