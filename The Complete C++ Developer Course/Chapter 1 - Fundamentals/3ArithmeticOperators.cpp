/**
 *    Arithmetic Operators
 *      +    addition 
 *      -    subtraction
 *      *    multiplication 
 *      /    division
 *      %    modulus 
 * 
 */

#include "include.h"

int main(){
    
    printf("\n        Arithmetic Operators Outputs\n");

    int a = 10;
    int b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
     

    printf("Addition or Sum of              %d & %d = %d \n", a , b ,sum);
    printf("Subtraction or Difference of    %d & %d = %d \n", a , b ,difference);
    printf("Multiplication or Product of    %d & %d = %d \n", a , b ,product);
    printf("Divison or Quotient of          %d & %d = %d \n", a , b ,quotient);
    printf("Modulus or Remainder of         %d & %d = %d \n", a , b ,remainder);
    
    return 0;
}