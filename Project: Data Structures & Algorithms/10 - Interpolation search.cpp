#include <iostream>
#include <vector>

/*
    Interpolation Search - like binary search, but instead of always checking
                            the middle, it estimates WHERE the target probably is
                            based on its value (like flipping to a page in a
                            dictionary based on the letter, not always the middle).
                            REQUIRES sorted, and works best on uniformly distributed data.
                            Time complexity: O(log log n) on good data, O(n) worst case
*/
int interpolationSearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = static_cast<int>(arr.size()) - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        if (low == high) {
            return (arr[low] == target) ? low : -1;
        }

        // estimate the likely position based on the target's value
        int pos = low + static_cast<int>(
            (static_cast<double>(target - arr[low]) / (arr[high] - arr[low])) * (high - low)
        );

        if (arr[pos] == target) {
            return pos;
        } else if (arr[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1; // not found
}

int main(){

    // evenly spaced, sorted data, exactly what interpolation search is good at
    std::vector<int> sorted = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    std::cout << interpolationSearch(sorted, 70) << " <- index of 70\n"; // 6
    std::cout << interpolationSearch(sorted, 15) << " <- 15 isn't in the list\n"; // -1

    return 0;
}
