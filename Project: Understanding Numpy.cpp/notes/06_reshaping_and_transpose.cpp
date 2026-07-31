// Lesson 06: Reshaping and transposing
//
// reshape() mutates the array IN PLACE and returns a reference to itself
// (different from numpy's `a.reshape(...)`, which returns a new view and
// leaves the original untouched -- here reshape() changes `a` itself).
// transpose() and flatten() return brand-new arrays and leave the original
// alone.
//
// Build & run:
//   make run-06_reshaping_and_transpose

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    auto a = nc::arange<int>(0, 12); // 1x12 row vector: 0..11
    std::cout << "a (1x12) = " << a;

    // reshape(rows, cols) -- mutates `a` in place.
    a.reshape(3, 4);
    std::cout << "a.reshape(3,4) (in place) =\n" << a;

    // transpose() -- returns a NEW array, doesn't touch `a`.
    auto aT = a.transpose();
    std::cout << "a.transpose() (4x3, new array) =\n" << aT;
    std::cout << "a is unchanged =\n" << a;

    // flatten() -- collapses back down to a 1xN row, also a new array.
    auto flat = a.flatten();
    std::cout << "a.flatten() = " << flat;

    // reshape(-1-style equivalent): NumCpp doesn't support numpy's `-1`
    // "infer this dimension" trick -- you must compute the missing
    // dimension yourself from .size().
    nc::NdArray<int> b = nc::arange<int>(0, 6);
    int rows = 2;
    int cols = static_cast<int>(b.size()) / rows;
    b.reshape(rows, cols);
    std::cout << "\nb reshaped to (" << rows << "," << cols << ") =\n" << b;

    return 0;
}
