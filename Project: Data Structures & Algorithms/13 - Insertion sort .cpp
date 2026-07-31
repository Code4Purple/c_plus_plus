#include <iostream>
#include <vector>

/*
    Insertion Sort - builds the sorted list one element at a time, like sorting
                      a hand of playing cards. Take the next element and slide it
                      backwards into its correct spot among the already-sorted part.
                      Fast on small or nearly-sorted lists.
                      Time complexity: O(n^2) worst case, O(n) best case (already sorted)
*/
void insertionSort(std::vector<int>& arr) {
    int n = static_cast<int>(arr.size());
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // shift everything bigger than key one step to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // drop key into its correct spot
    }
}

int main(){

    std::vector<int> nums = {9, 5, 1, 4, 3};

    insertionSort(nums);

    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n"; // 1 3 4 5 9

    return 0;
}
