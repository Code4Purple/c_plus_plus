#include <iostream>
#include <vector>

/*
    Binary Search - repeatedly cut the search range in half.
                    REQUIRES the data to already be sorted.
                    Compare target to the middle element:
                        - match       -> done
                        - target < mid -> search the left half
                        - target > mid -> search the right half
                    Time complexity: O(log n)
*/
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = static_cast<int>(arr.size()) - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;  // target is in the right half
        } else {
            high = mid - 1; // target is in the left half
        }
    }
    return -1; // not found
}

int main(){

    std::vector<int> sorted = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};

    std::cout << binarySearch(sorted, 23) << " <- index of 23\n"; // 5
    std::cout << binarySearch(sorted, 100) << " <- 100 isn't in the list\n"; // -1

    return 0;
}
