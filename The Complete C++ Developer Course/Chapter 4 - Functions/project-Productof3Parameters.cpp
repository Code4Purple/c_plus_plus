#include <iostream>

int product_of_three(int a, int b, int c);

int main(){
    printf("        Project - Product of Three\n");
    int product = product_of_three(5,10,2);
    std::cout << "Product of Three : " ;
    std::cout << product << std::endl;


    return 0;
}

int product_of_three(int a, int b, int c){
    std::cout << "a = " << a << ", " << "b = " << b << ", " << "c = " << c << std::endl;
    if(a >= 0){
        if(b >= 0){
            if(c >= 0){
                return (a * b) * c;
            }
        }
    }
    return 0;
}