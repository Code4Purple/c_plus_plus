// Lesson 09: Combining arrays
//
// hstack   -- glue arrays side by side (same number of rows)
// vstack   -- glue arrays on top of each other (same number of cols)
// append   -- like numpy's np.append: flatten-and-append (Axis::NONE), or
//             append along a specific axis if shapes allow it
//
// Build & run:
//   make run-09_stacking_and_concatenation

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::NdArray<int> a = {{1, 2}, {3, 4}};
    nc::NdArray<int> b = {{5, 6}, {7, 8}};

    std::cout << "a =\n" << a;
    std::cout << "b =\n" << b;

    // hstack: side by side -> result is 2x4
    auto sideBySide = nc::hstack({a, b});
    std::cout << "\nhstack({a, b}) (2x4) =\n" << sideBySide;

    // vstack: stacked vertically -> result is 4x2
    auto stacked = nc::vstack({a, b});
    std::cout << "\nvstack({a, b}) (4x2) =\n" << stacked;

    // append with Axis::ROW adds new rows (grows down), Axis::COL adds new
    // columns (grows right) -- same idea as numpy's axis parameter.
    auto appendedRows = nc::append(a, b, nc::Axis::ROW);
    std::cout << "\nappend(a, b, Axis::ROW) =\n" << appendedRows;

    auto appendedCols = nc::append(a, b, nc::Axis::COL);
    std::cout << "\nappend(a, b, Axis::COL) =\n" << appendedCols;

    // append with no axis flattens both arrays first, like numpy's default.
    auto flatAppend = nc::append(a, b);
    std::cout << "\nappend(a, b) [flattened] = " << flatAppend;

    return 0;
}
