#include <iostream>
#include <vector>

/*
    Bubble Sort - repeatedly step through the list, swapping adjacent elements
                  if they're in the wrong order. Each full pass "bubbles" the
                  largest remaining element up to its correct spot at the end.
                  Simple, but slow on large lists.
                  Time complexity: O(n^2)
*/
void bubbleSort(std::vector<int>& arr) {
    int n = static_cast<int>(arr.size());
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){

    std::vector<int> nums = {5, 1, 4, 2, 8};

    bubbleSort(nums);

    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n"; // 1 2 4 5 8

    return 0;
}
