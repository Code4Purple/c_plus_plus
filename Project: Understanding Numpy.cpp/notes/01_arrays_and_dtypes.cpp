// Lesson 01: What is an NdArray?
//
// NumCpp's core type is nc::NdArray<T> — a 2D-by-default, contiguous array
// (there's no true 1D array; a "row vector" is a 1xN NdArray and a "column
// vector" is an Nx1 NdArray). This mirrors numpy.ndarray closely enough that
// the mental model transfers directly.
//
// Build & run:
//   make run-01_arrays_and_dtypes

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    // Construct from a nested initializer list -> this becomes a 2x3 matrix.
    nc::NdArray<double> a = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};

    std::cout << "a =\n" << a << "\n";

    // shape() gives {rows, cols}; size() gives total element count.
    std::cout << "shape:    " << a.shape() << "\n";
    std::cout << "num rows: " << a.numRows() << "\n";
    std::cout << "num cols: " << a.numCols() << "\n";
    std::cout << "size:     " << a.size() << "\n";

    // Every NdArray is templated on its element type -- this is the
    // equivalent of numpy's `dtype`. Mixing types requires an explicit cast,
    // just like numpy's astype().
    nc::NdArray<int> ints = {1, 2, 3, 4, 5};          // a 1x5 "row vector"
    nc::NdArray<double> asDouble = ints.astype<double>();

    std::cout << "\nints (int)       = " << ints;
    std::cout << "ints as double   = " << asDouble;

    // A single value out of the array:
    std::cout << "\na(0, 2) = " << a(0, 2) << "\n"; // row 0, col 2 -> 3.0

    return 0;
}
