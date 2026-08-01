// Lesson 07: Reductions and statistics
//
// sum/min/max/argmax/argmin are member methods that take an Axis:
//   Axis::NONE (default) -> reduce the WHOLE array to a single value
//   Axis::ROW            -> collapse rows      -> one result PER COLUMN (1xN)
//   Axis::COL            -> collapse columns   -> one result PER ROW    (Nx1)
// mean/median/stdev/var are free functions (nc::mean, nc::stdev, ...) with
// the same Axis argument, because they need floating-point math regardless
// of the input dtype.
//
// Build & run:
//   make run-07_reductions_stats

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::NdArray<double> m = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};
    std::cout << "m =\n" << m;

    std::cout << "\n-- whole-array reductions (Axis::NONE) --\n";
    std::cout << "sum:  " << m.sum();
    std::cout << "min:  " << m.min();
    std::cout << "max:  " << m.max();
    std::cout << "mean: " << nc::mean(m);
    std::cout << "std:  " << nc::stdev(m);

    std::cout << "\n-- Axis::ROW: collapse rows -> per-COLUMN result --\n";
    std::cout << "sum per column:  " << m.sum(nc::Axis::ROW);
    std::cout << "mean per column: " << nc::mean(m, nc::Axis::ROW);

    std::cout << "\n-- Axis::COL: collapse columns -> per-ROW result --\n";
    std::cout << "sum per row:  " << m.sum(nc::Axis::COL);
    std::cout << "mean per row: " << nc::mean(m, nc::Axis::COL);

    // argmax / argmin give the flat or per-axis index of the extreme value.
    std::cout << "\nargmax (flat index of overall max): " << m.argmax();
    std::cout << "argmax per column: " << m.argmax(nc::Axis::ROW);

    return 0;
}
