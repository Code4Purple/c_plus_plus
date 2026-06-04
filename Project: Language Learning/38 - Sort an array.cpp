#include <iostream>

void sort(int array[], int size);

int main(){

    int array[] = {10,1,3,6,2,4,5,9,8,7};
    int size = sizeof(array)/sizeof(array[0]);

    
    std::cout << "Unsorted Array       : ";
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }

    sort(array,size);

    std::cout << "\nBubble Sorted Array  : ";
    for(int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++ ){
        for(int j = 0; j < size -i -1; j++){
            if(array[j] > array[j+ 1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j + 1] = temp;
                
            }
        }
    }
}