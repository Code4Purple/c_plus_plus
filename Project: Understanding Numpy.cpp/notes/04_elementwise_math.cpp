// Lesson 04: Elementwise math
//
// Arithmetic operators on NdArrays are elementwise by default (Hadamard-style),
// exactly like numpy's `+ - * /` on ndarrays. Matrix multiplication is a
// SEPARATE operation (nc::dot / nc::matmul) covered in lesson 10 -- using `*`
// does NOT do matrix multiply, same trap as raw numpy.ndarray * .
//
// Build & run:
//   make run-04_elementwise_math

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::NdArray<double> a = {{1.0, 2.0}, {3.0, 4.0}};
    nc::NdArray<double> b = {{10.0, 20.0}, {30.0, 40.0}};

    std::cout << "a + b =\n" << (a + b);
    std::cout << "a - b =\n" << (a - b);
    std::cout << "a * b (elementwise!) =\n" << (a * b);
    std::cout << "b / a =\n" << (b / a);

    // Scalar ops broadcast automatically.
    std::cout << "a * 2 =\n" << (a * 2.0);
    std::cout << "a + 100 =\n" << (a + 100.0);

    // Comparisons produce boolean arrays.
    std::cout << "a > 2 =\n" << (a > 2.0);

    // Common math functions, applied elementwise -- these live in the nc::
    // namespace, mirroring numpy's np.sqrt, np.exp, etc.
    std::cout << "sqrt(a) =\n" << nc::sqrt(a);
    std::cout << "exp(a)  =\n" << nc::exp(a);
    std::cout << "power(a, 2) =\n" << nc::power(a, 2);

    return 0;
}
