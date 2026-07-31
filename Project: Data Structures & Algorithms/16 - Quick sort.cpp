#include <iostream>
#include <vector>

/*
    Quick Sort - another "divide and conquer" sort.
                 1. pick a "pivot" element
                 2. partition: everything smaller goes left, everything bigger goes right
                 3. recursively quick sort the left and right partitions
                 Usually faster in practice than merge sort (less extra memory).
                 Time complexity: O(n log n) average, O(n^2) worst case (bad pivot choices)
*/
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // pivot = last element in this range
    int i = low - 1;       // boundary of "smaller than pivot" region

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]); // put the pivot in its final sorted spot
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low >= high) {
        return; // base case: 0 or 1 elements
    }
    int pivotIndex = partition(arr, low, high);
    quickSort(arr, low, pivotIndex - 1);  // sort left of pivot
    quickSort(arr, pivotIndex + 1, high); // sort right of pivot
}

int main(){

    std::vector<int> nums = {10, 80, 30, 90, 40, 50, 70};

    quickSort(nums, 0, static_cast<int>(nums.size()) - 1);

    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n"; // 10 30 40 50 70 80 90

    return 0;
}
