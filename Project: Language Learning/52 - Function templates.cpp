#include <iostream>
template <typename T>
T max(T x, T y){
    return (x > y) ? x : y;
};
//int max(int x, int y);

int main(){

    /*
        function templates = describes what a function looks like.
                             Can be used to generate as many overloaded functions
                             as needed, each using different data types
    */

    std::cout << max(1,2) << "\n";

    return 0;
}
/*  We would normally use an overload function to max out each datatype
    but if we use templates we dont need all the different datatypes listed.
*/
/*int max(int x, int y){
    return (x > y) ? x : y;
}
double max(double x, double y){
    return (x > y) ? x : y;
} */

