#include <iostream>

//int searchArray(int array[], int size, int element);
int searchArray(std::string array[], int size, std::string element);

int main(){

    //int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string heros[] = {"Batman", "Superman", "The Flash"};
    
    //int size = sizeof(numbers)/sizeof(number[0]);
    int size = sizeof(heros)/sizeof(heros[0]);
    
    int index;
    
    //int myNum;
    std::string myString;
    
    std::cout << "Enter element to search for: ";
    //std::cin >> myNum;
    getline(std::cin, myString);
    
    //index = searchArray(numbers, size, myNum);
    index = searchArray(heros,size,myString);
    
    if(index != -1){
        //std::cout << myNum << " is at index " << index;
        std::cout << myString << " is at index " << index << std::endl;
    }
    else {
        std::cout << myString << " is not in the array" << std::endl;
    }

    

    return 0;
}

/*int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1; */

int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1; 

    
}
