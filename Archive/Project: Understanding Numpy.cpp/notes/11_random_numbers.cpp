// Lesson 11: Random numbers
//
// nc::random mirrors numpy.random: seed once for reproducibility, then draw
// from uniform/normal/integer distributions, either as single scalars or
// whole arrays at once by passing a Shape.
//
// Build & run:
//   make run-11_random_numbers

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    // Seed for reproducible output -- same idea as np.random.seed(42).
    nc::random::seed(42);

    // Single random values.
    double u = nc::random::uniform<double>(0.0, 1.0);
    double n = nc::random::normal<double>(0.0, 1.0);
    int i = nc::random::randInt<int>(0, 10);
    std::cout << "uniform(0,1)  -> " << u << "\n";
    std::cout << "normal(0,1)   -> " << n << "\n";
    std::cout << "randInt(0,10) -> " << i << "\n";

    // Whole arrays at once by passing a Shape.
    auto uArr = nc::random::uniform<double>(nc::Shape(2, 3), 0.0, 1.0);
    auto nArr = nc::random::normal<double>(nc::Shape(2, 3), 0.0, 1.0);
    std::cout << "\nuniform array (2x3) =\n" << uArr;
    std::cout << "normal array (2x3)  =\n" << nArr;

    // Reseeding with the same value reproduces the same sequence -- crucial
    // for debugging any randomized algorithm (including the weight init in
    // later lessons' neural net). Note this only reproduces a draw of the
    // SAME shape/distribution made immediately after the seed call -- the
    // scalar draws above already consumed state, so we reseed right before
    // repeating the exact uniform-array draw to get a byte-for-byte match.
    nc::random::seed(42);
    auto firstDraw = nc::random::uniform<double>(nc::Shape(2, 3), 0.0, 1.0);
    nc::random::seed(42);
    auto secondDraw = nc::random::uniform<double>(nc::Shape(2, 3), 0.0, 1.0);
    std::cout << "\nfirst draw after seed(42)  =\n" << firstDraw;
    std::cout << "second draw after seed(42) (identical) =\n" << secondDraw;

    return 0;
}
