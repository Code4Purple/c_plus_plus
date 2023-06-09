#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    /*
        Math within the C++ Language
            requires : #include <cmath>
                Basic math
            ----------------------
                max
                min
                sqrt
                round
                log

                        Other Math Functions
       ----------------------------------------------------------------------------
            Function 	|   Description
            abs(x) 	        Returns the absolute value of x
            acos(x) 	    Returns the arccosine of x
            asin(x) 	    Returns the arcsine of x
            atan(x) 	    Returns the arctangent of x
            cbrt(x) 	    Returns the cube root of x
            ceil(x) 	    Returns the value of x rounded up to its nearest integer
            cos(x) 	        Returns the cosine of x
            cosh(x) 	    Returns the hyperbolic cosine of x
            exp(x) 	        Returns the value of Ex
            expm1(x) 	    Returns ex -1
            fabs(x) 	    Returns the absolute value of a floating x
            fdim(x, y) 	    Returns the positive difference between x and y
            floor(x) 	    Returns the value of x rounded down to its nearest integer
            hypot(x, y) 	Returns sqrt(x2 +y2) without intermediate overflow or underflow
            fma(x, y, z) 	Returns x*y+z without losing precision
            fmax(x, y) 	    Returns the highest value of a floating x and y
            fmin(x, y) 	    Returns the lowest value of a floating x and y
            fmod(x, y) 	    Returns the floating point remainder of x/y
            pow(x, y) 	    Returns the value of x to the power of y
            sin(x) 	        Returns the sine of x (x is in radians)
            sinh(x) 	    Returns the hyperbolic sine of a double value
            tan(x) 	        Returns the tangent of an angle
            tanh(x) 	    Returns the hyperbolic tangent of a double value

    */

    // Basic Math
    int x, y;
    x = 25;
    y = 2;
    double t = 2.6;
    // max
    printf("The max number between %d & %d is : %d\n", x, y, max(x, y));
    // min
    printf("The min number between %d & %d is : %d\n", x, y, min(x, y));
    // sqrt
    printf("The square root of %d is : %.0f\n", x, sqrt(x));
    // round
    printf("The %.1f number rounded up is : %.1f\n", t, round(t));
    // log (natural logarithm)
    printf("The log of %d is : %.2f\n", y, log(y));
}