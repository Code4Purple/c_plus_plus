// Lesson 08: Boolean masks and filtering
//
// Comparison operators (>, <, ==, ...) produce an NdArray<bool> the same
// shape as the input -- a "mask". You can then:
//   1. Filter with it:   a[mask]              -> flat array of matches
//   2. Select between two arrays with it: nc::where(mask, ifTrue, ifFalse)
//   3. Overwrite matching entries in place:   a.putMask(mask, value)
//
// Build & run:
//   make run-08_boolean_masking

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::NdArray<int> a = {{1, 5, 2, 8}, {9, 0, 3, 7}};
    std::cout << "a =\n" << a;

    // Build a mask.
    nc::NdArray<bool> mask = a > 4;
    std::cout << "\nmask (a > 4) =\n" << mask;

    // 1) Filtering -- returns a flat 1xN array of only the matching values.
    auto matches = a[mask];
    std::cout << "\na[mask] (values > 4) = " << matches;

    // 2) nc::where(mask, ifTrue, ifFalse) -- elementwise ternary, same shape
    // as the input, just like numpy.where.
    auto clipped = nc::where(mask, a, 0); // keep value if >4, else 0
    std::cout << "\nwhere(mask, a, 0) =\n" << clipped;

    // 3) putMask -- mutate `a` in place wherever the mask is true.
    nc::NdArray<int> b = a; // copy so we don't destroy `a`
    b.putMask(mask, -1);
    std::cout << "\nb after putMask(mask, -1) =\n" << b;

    // Masks compose with logical operators too.
    auto combo = (a > 1) && (a < 8);
    std::cout << "\n(a>1) && (a<8) =\n" << combo;

    return 0;
}
