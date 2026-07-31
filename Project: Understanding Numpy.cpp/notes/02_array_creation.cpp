// Lesson 02: Ways to create arrays
//
// Just like numpy has zeros/ones/arange/linspace/eye, so does NumCpp. These
// all take an nc::Shape{rows, cols} (or a single int for a square/1-row shape
// depending on the function).
//
// Build & run:
//   make run-02_array_creation

#include "NumCpp.hpp"
#include <iostream>
#include <vector>

int main()
{
    // zeros / ones : shape -> filled array
    auto z = nc::zeros<double>(nc::Shape(2, 3));
    auto o = nc::ones<double>(nc::Shape(3, 2));
    std::cout << "zeros(2,3) =\n" << z;
    std::cout << "ones(3,2)  =\n" << o;

    // full : shape + fill value
    auto sevens = nc::full<double>(nc::Shape(2, 2), 7.0);
    std::cout << "full(2,2,7) =\n" << sevens;

    // arange(start, stop, step) -- stop is exclusive, just like numpy
    auto r = nc::arange<double>(0.0, 10.0, 2.0);
    std::cout << "arange(0,10,2) = " << r;

    // linspace(start, stop, numPoints) -- stop is INCLUSIVE by default
    auto lin = nc::linspace<double>(0.0, 1.0, 5);
    std::cout << "linspace(0,1,5) = " << lin;

    // eye : identity matrix
    auto identity = nc::eye<double>(3);
    std::cout << "eye(3) =\n" << identity;

    // Building an NdArray straight from a std::vector -- useful when data
    // comes from elsewhere in a C++ program rather than a literal.
    std::vector<double> raw = {10.0, 20.0, 30.0, 40.0};
    nc::NdArray<double> fromVec(raw);
    std::cout << "from std::vector = " << fromVec;

    return 0;
}
