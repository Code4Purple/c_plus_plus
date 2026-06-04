#include <iostream>

double getTotal(double price[],int size);

int main(){

    double prices[] = {49.49, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$" << total << std::endl;

    return 0;
}

double getTotal(double price[],int size){
    double sum = 0;

    for(int i = 0; i < size; i++){
        sum += price[i];
    }

    return sum;
}
