// Lesson 03: Indexing and slicing
//
// NumCpp supports single-element access with (row, col), whole row/col
// access, and numpy-style slices via nc::Slice(start, stop, step) — stop is
// exclusive, exactly like numpy and Python.
//
// Build & run:
//   make run-03_indexing_and_slicing

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::NdArray<int> a = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    std::cout << "a =\n" << a;

    // Single element: (row, col)
    std::cout << "\na(1, 2) = " << a(1, 2) << "\n"; // row 1, col 2 -> 7

    // Whole row / whole column
    std::cout << "row 0    = " << a(0, a.cSlice());
    std::cout << "col 1    = " << a(a.rSlice(), 1);

    // Slice(start, stop, step) — same semantics as Python's a[start:stop:step]
    std::cout << "\nrows 0:2 =\n" << a(nc::Slice(0, 2), a.cSlice());
    std::cout << "cols 1:3 =\n" << a(a.rSlice(), nc::Slice(1, 3));

    // Negative-style "everything" slices via the convenience helpers above
    // (a.rSlice() == every row, a.cSlice() == every column).

    // Boolean-style single-row/col extraction returns a smaller NdArray, not
    // a scalar -- same as numpy, where a[0] is still an ndarray.
    auto firstRow = a(0, a.cSlice());
    std::cout << "\nfirstRow shape = " << firstRow.shape() << "\n";

    // IMPORTANT DIFFERENCE FROM NUMPY: a(...) with a slice returns a COPY,
    // not a view. In real numpy, `a[0, :] = 9` mutates the original array in
    // place because slicing returns a view. Here, `b(0, b.cSlice()) = 9;`
    // would silently assign into a temporary and do nothing to b. To mutate
    // in place you must use the explicit .put(...) method instead:
    nc::NdArray<int> b = {{0, 0}, {0, 0}};
    b.put(0, b.cSlice(), 9); // set entire first row to 9, in place
    std::cout << "\nb after row-set =\n" << b;

    return 0;
}
