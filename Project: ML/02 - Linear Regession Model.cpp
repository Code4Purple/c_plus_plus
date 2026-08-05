#include <iostream>

/*
    
    The code implements a simple Linear Regression class, allowing
    prediction of a value based on a linear equation defined by a 
    slope and intercept.

*/

class LinearRegression {
    public: 
        LinearRegression(float slope, float intercept)
            : slope(slope),  intercept(intercept) {}
        
        float predict(float x) {
            return slope * x + intercept;
        }
    private:
        float slope;
        float intercept;
};

/*
    In the "main" function, an instance of the LinearRegression class
    predicts a house price based on a given size. demonstrating usage 
    of the model.
*/

int main(){
    LinearRegression model(300, 2000); // using random slope and intercept
    float size = 2.5; // Assume size is 2.5k sq.ft
    std::cout << "Predicted house price: $" << model.predict(size) << "\n";
}