// Lesson 13: Logistic regression (binary classification)
//
// Same gradient-descent skeleton as lesson 12, but now:
//   - two input features per example (X is Nx2, W is 2x1)
//   - predictions are squashed into (0,1) by the sigmoid function
//   - the loss is binary cross-entropy instead of squared error
//
// This is precisely "a neural network with zero hidden layers": one linear
// layer (dot(X, W) + b) followed by one nonlinearity (sigmoid). Lesson 14
// stacks a second linear+nonlinear layer on top of exactly this structure.
//
// Forward:  z = dot(X, W) + b
//           a = sigmoid(z) = 1 / (1 + exp(-z))
// Loss:     L = -mean( y*log(a) + (1-y)*log(1-a) )
// Gradients (this pair has a famously clean derivative):
//           dz = a - y
//           dW = dot(X^T, dz) / N
//           db = mean(dz)
//
// Build & run:
//   make run-13_logistic_regression

#include "NumCpp.hpp"
#include <iostream>

nc::NdArray<double> sigmoid(const nc::NdArray<double>& z)
{
    return 1.0 / (1.0 + nc::exp(-z));
}

int main()
{
    nc::random::seed(0);

    // ---- 1. Synthetic data: two separable blobs of points ----
    // Class 0 clustered around (2,2), class 1 clustered around (6,6).
    const int perClass = 50;
    auto class0 = nc::random::normal<double>(nc::Shape(perClass, 2), 0.0, 1.0) + 2.0;
    auto class1 = nc::random::normal<double>(nc::Shape(perClass, 2), 0.0, 1.0) + 6.0;
    auto X = nc::vstack({class0, class1});                    // (100, 2)
    auto y = nc::vstack({nc::zeros<double>(nc::Shape(perClass, 1)),
                          nc::ones<double>(nc::Shape(perClass, 1))}); // (100, 1)
    const int N = static_cast<int>(X.numRows());

    // ---- 2. Initialize parameters ----
    auto W = nc::zeros<double>(nc::Shape(2, 1));
    double b = 0.0;
    const double lr = 0.1;
    const int epochs = 1000;

    // ---- 3. Gradient descent loop ----
    for (int epoch = 0; epoch < epochs; ++epoch)
    {
        auto z = nc::dot(X, W) + b;
        auto a = sigmoid(z);

        // Binary cross-entropy loss (scalar).
        auto losses = -(y * nc::log(a) + (1.0 - y) * nc::log(1.0 - a));
        double loss = nc::mean(losses).item();

        auto dz = a - y;                                 // (N,1)
        auto dW = nc::dot(X.transpose(), dz) / static_cast<double>(N); // (2,1)
        double db = nc::mean(dz).item();

        W -= dW * lr;
        b -= lr * db;

        if (epoch % 100 == 0 || epoch == epochs - 1)
        {
            std::cout << "epoch " << epoch << "  loss=" << loss << "\n";
        }
    }

    std::cout << "\nlearned W =\n" << W;
    std::cout << "learned b = " << b << "\n";

    // ---- 4. Accuracy on the training data ----
    auto finalPredictions = sigmoid(nc::dot(X, W) + b) > 0.5;
    auto actual = y > 0.5;
    auto correct = (finalPredictions == actual).astype<double>();
    double accuracy = nc::mean(correct).item();
    std::cout << "training accuracy = " << (accuracy * 100.0) << "%\n";

    return 0;
}
