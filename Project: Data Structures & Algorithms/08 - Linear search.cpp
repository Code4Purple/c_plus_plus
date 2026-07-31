#include <iostream>
#include <vector>

/*
    Linear Search - check every element one by one until you find the target
                    (or reach the end). Works on unsorted data.
                    Time complexity: O(n)
*/
int linearSearch(const std::vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return static_cast<int>(i); // found it, return the index
        }
    }
    return -1; // not found
}

int main(){

    std::vector<int> nums = {12, 4, 99, 3, 45, 7};

    int result = linearSearch(nums, 45);
    std::cout << result << " <- index of 45\n"; // 4

    int missing = linearSearch(nums, 1000);
    std::cout << missing << " <- 1000 isn't in the list\n"; // -1

    return 0;
}
