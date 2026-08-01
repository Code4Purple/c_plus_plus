// Lesson 05: Broadcasting
//
// Just like numpy, NumCpp lets you combine arrays of DIFFERENT shapes as long
// as they're "compatible": a (1xN) row broadcasts across every row of an
// (MxN) matrix, and an (Mx1) column broadcasts across every column. This is
// exactly how numpy broadcasting works, and it's the mechanism that makes
// "add a bias to every row" or "normalize every column" a single expression
// instead of a manual loop.
//
// Build & run:
//   make run-05_broadcasting

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::NdArray<double> m = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};
    std::cout << "m (3x3) =\n" << m;

    // Row vector (1x3) broadcast across all 3 rows of m.
    nc::NdArray<double> rowVec = {100.0, 200.0, 300.0};
    std::cout << "\nrowVec (1x3) = " << rowVec;
    std::cout << "m + rowVec (broadcast across rows) =\n" << (m + rowVec);

    // Column vector (3x1) broadcast across all 3 columns of m.
    // (Built as a row then transposed -- a {{10.0},{20.0},{30.0}} literal is
    // ambiguous to the compiler when every inner list has just one element.)
    nc::NdArray<double> colVec = nc::NdArray<double>{10.0, 20.0, 30.0}.transpose();
    std::cout << "\ncolVec (3x1) =\n" << colVec;
    std::cout << "m + colVec (broadcast across cols) =\n" << (m + colVec);

    // Practical example: normalize each column to zero mean.
    // Axis::ROW here means "reduce across rows", producing one mean per
    // column -- the NumCpp axis convention: Axis::ROW collapses rows (result
    // is 1 x nCols), Axis::COL collapses columns (result is nRows x 1).
    auto colMeans = nc::mean(m, nc::Axis::ROW);
    std::cout << "\ncolumn means (1x3) = " << colMeans;
    std::cout << "m - colMeans (broadcast subtract) =\n" << (m - colMeans);

    return 0;
}
