#include <iostream>
#include <vector>

/*
    Merge Sort - a "divide and conquer" sort.
                 1. split the list in half, recursively, until pieces are size 1
                 2. merge the pieces back together in sorted order
                 Much faster than bubble/selection/insertion sort on large data.
                 Time complexity: O(n log n)
*/
void merge(std::vector<int>& arr, int left, int mid, int right) {
    std::vector<int> leftHalf(arr.begin() + left, arr.begin() + mid + 1);
    std::vector<int> rightHalf(arr.begin() + mid + 1, arr.begin() + right + 1);

    size_t i = 0, j = 0;
    int k = left;

    // pick the smaller front element from each half until one runs out
    while (i < leftHalf.size() && j < rightHalf.size()) {
        arr[k++] = (leftHalf[i] <= rightHalf[j]) ? leftHalf[i++] : rightHalf[j++];
    }
    while (i < leftHalf.size()) arr[k++] = leftHalf[i++];
    while (j < rightHalf.size()) arr[k++] = rightHalf[j++];
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) {
        return; // base case: 1 element is already "sorted"
    }
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);      // sort left half
    mergeSort(arr, mid + 1, right); // sort right half
    merge(arr, left, mid, right);   // merge the two sorted halves
}

int main(){

    std::vector<int> nums = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(nums, 0, static_cast<int>(nums.size()) - 1);

    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n"; // 3 9 10 27 38 43 82

    return 0;
}
