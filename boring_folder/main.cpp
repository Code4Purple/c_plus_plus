#include <iostream>
#include <vector>

std::vector<int> counting;
int user_max_size = 0;


void maxInt(){
    for(int i = 0; i < user_max_size + 1; i++){
        counting.push_back(i);
    }
};

void printData(){
    std::cout << "Printing the data..." << std::endl;
    for (const auto& element : counting) {
        std::cout << element << " ";
    }
        std::cout << std::endl;
};

int main(){
    std::cout << "How for do want to count? " << std::endl;
    std::cin >> user_max_size;
    std::cout << "Size of Vector @ start : " << counting.size() << std::endl;
    std::cout << "Gathering Data..." << std::endl;
    maxInt();
    std::cout << "Got all data gathered! " << std::endl;
    std::cout << "Size of Vector @ end : " << counting.size() << std::endl;
    printData();


}
 