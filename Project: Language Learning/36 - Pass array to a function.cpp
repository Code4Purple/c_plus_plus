#include <iostream>

double getTotal(double prices[]);

int main(){

    double prices[] = {49.49, 15.05, 75, 9.99};
    double total = getTotal(prices);
    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[]){
    double sum = 0;

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        sum += prices[i];
    }

    return sum;
}
