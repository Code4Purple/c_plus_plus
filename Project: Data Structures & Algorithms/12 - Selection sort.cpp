#include <iostream>
#include <vector>

/*
    Selection Sort - repeatedly find the SMALLEST remaining element and swap it
                      into its correct position at the front.
                      Unlike bubble sort, it does far fewer swaps (one per pass).
                      Time complexity: O(n^2)
*/
void selectionSort(std::vector<int>& arr) {
    int n = static_cast<int>(arr.size());
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // found a new smallest element
            }
        }
        std::swap(arr[i], arr[minIndex]); // one swap per pass
    }
}

int main(){

    std::vector<int> nums = {29, 10, 14, 37, 13};

    selectionSort(nums);

    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n"; // 10 13 14 29 37

    return 0;
}
