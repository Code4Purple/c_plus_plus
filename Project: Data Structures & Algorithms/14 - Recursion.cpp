#include <iostream>

/*
    Recursion - a function that calls itself to solve a smaller version of the
                same problem, until it hits a "base case" that stops the calls.
                Every recursive function needs:
                    1. a base case   (when to stop)
                    2. a recursive case (call itself with a smaller input)
                Without a base case -> infinite recursion -> stack overflow crash
*/

// factorial(5) = 5 * 4 * 3 * 2 * 1
int factorial(int n) {
    if (n <= 1) {
        return 1; // base case
    }
    return n * factorial(n - 1); // recursive case
}

// fibonacci: each number is the sum of the two before it (0, 1, 1, 2, 3, 5, 8...)
int fibonacci(int n) {
    if (n <= 1) {
        return n; // base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
}

int main(){

    std::cout << factorial(5) << " <- 5!\n"; // 120

    for (int i = 0; i < 8; i++) {
        std::cout << fibonacci(i) << " "; // 0 1 1 2 3 5 8 13
    }
    std::cout << "\n";

    return 0;
}
