#include <iostream>

using namespace std;

int main()
{
    /*
        Arithmetic Operators
            +  -> Addition
            -  -> Subtraction
            *  -> Multipilication
            /  -> Divison
            %  -> Modules ->  returns the divison remainder
            ++ -> Increment
            -- -> Decrement
    */

    // Arithmetic Operators

    // Starting numbers
    int x = 10;
    int y = 2;

    cout << endl;
    cout << "   Arithmetic Operators" << endl;
    cout << "----------------------------" << endl;
    cout << "unchanged x : " << x << endl;
    cout << "unchanged y : " << y << endl;

    // Addition
    printf("x + y = %d\n", x + y);
    // Subtraction
    printf("x - y = %d\n", x - y);
    // Multiplication
    printf("x * y = %d\n", x * y);
    // Divison
    printf("x / y = %d\n", x / y);
    // Increment
    printf("x++ = %d\n", x++);
    // Decrement
    printf("y-- = %d\n", y--);

    //  Modulus - Remainder
    x = 5;
    y = 2;
    printf("new x : %d , new y : %d , Moduls : %d\n", x, y, x % y);

    /*
        Assignment Operators
            Operator | Example | Same as
                =       x = 5     x = 5
                +=      x += 3    x = x + 3
                -=      x -= 3    x = x - 3
                *=      x *= 3    x = x * 3
                /=      x /= 3    x = x / 3
                %=      x %= 3    x = x % 3
                &=      x &= 3    x = x & 3
                |=      x |= 3    x = x | 3
                ^=      x ^= 3    x = x ^ 3
                >>=     x >>= 3   x = x >> 3
                <<=     x <<= 3   x = x << 3
    */

    cout << endl;
    cout << "    Assignment Operators" << endl;
    cout << "-----------------------------" << endl;
    printf("x = %d\n", x);
    printf("%d +=  %d = %d\n", x, y, x += y);
    printf("%d -=  %d = %d\n", x, y, x -= y);
    printf("%d *=  %d = %d\n", x, y, x *= y);
    printf("%d /=  %d = %d\n", x, y, x /= y);
    printf("%d %=  %d = %d\n", x, y, x % y);
    printf("%d &=  %d = %d\n", x, y, x &= y);
    printf("%d |=  %d = %d\n", x, y, x |= y);
    printf("%d ^=  %d = %d\n", x, y, x ^= y);
    printf("%d >>= %d = %d\n", x, y, x >>= y);
    printf("%d <<= %d = %d\n", x, y, x <<= y);

    /*
        Comparsions Operators

        Operator |  Name                        |    Example
            ==      Equal to                          x == y
            !=      Not Equal                         x !y
            >       Greater than                      x > y
            <       Less Than                         x < y
            >=      Greater than or equal to          x >= y
            <=      Less than or equal to             x <= y
    */

    /*
         Logical Operators

         Operators       |   Name        |       Example         |       Description
             &&              Logical and         x < 5 && x < 10         Returns true if both statements are true
             ||              Logical or          x < 5 || x < 4          Returns true if one of the statements is true
             !               Logical not         !( x < 5 && x < 10)     Reverse the result, returns false if the result is true

    */
}