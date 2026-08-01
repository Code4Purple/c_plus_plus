// Lesson 12: Linear regression via manual gradient descent
//
// This is the first "real algorithm" lesson: everything before this was
// array mechanics, this is the first time we USE those mechanics to fit a
// model to data -- exactly the same math a numpy-based implementation would
// use, just with NumCpp types.
//
// Model:      y_hat = w * x + b               (one feature, scalar w and b)
// Loss (MSE): L = (1/N) * sum((y_hat - y)^2)
// Gradients:  dL/dw = (2/N) * sum(x * (y_hat - y))
//             dL/db = (2/N) * sum(y_hat - y)
// Update:     w -= lr * dL/dw
//             b -= lr * dL/db
//
// Build & run:
//   make run-12_linear_regression

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::random::seed(42);

    // ---- 1. Make synthetic data for a known line: y = 3x + 5 + noise ----
    const double trueW = 3.0;
    const double trueB = 5.0;
    const int N = 100;

    auto x = nc::random::uniform<double>(nc::Shape(N, 1), 0.0, 10.0);
    auto noise = nc::random::normal<double>(nc::Shape(N, 1), 0.0, 1.0);
    auto y = x * trueW + trueB + noise;

    // ---- 2. Initialize parameters ----
    double w = 0.0;
    double b = 0.0;
    const double lr = 0.01;
    const int epochs = 1000;

    // ---- 3. Gradient descent loop ----
    for (int epoch = 0; epoch < epochs; ++epoch)
    {
        auto yHat = x * w + b;             // predictions, shape (N,1)
        auto error = yHat - y;             // shape (N,1)

        double loss = (error * error).sum().item() / N; // mean squared error

        double dw = 2.0 * (x * error).sum().item() / N;
        double db = 2.0 * error.sum().item() / N;

        w -= lr * dw;
        b -= lr * db;

        if (epoch % 100 == 0 || epoch == epochs - 1)
        {
            std::cout << "epoch " << epoch << "  loss=" << loss << "  w=" << w
                       << "  b=" << b << "\n";
        }
    }

    std::cout << "\nlearned:  w=" << w << "  b=" << b << "\n";
    std::cout << "true:     w=" << trueW << "  b=" << trueB << "\n";

    return 0;
}
