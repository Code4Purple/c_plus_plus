// Lesson 14: A tiny neural network, trained by backpropagation
//
// This is the payoff lesson: everything before this was building blocks.
// Lesson 13's logistic regression was "one linear layer + one sigmoid".
// Here we stack TWO of those:
//
//   Input (2) -> Hidden layer (H neurons, sigmoid) -> Output (1, sigmoid)
//
// and train it on XOR -- the classic example that a SINGLE linear layer
// (lesson 13's whole model) provably cannot solve, because XOR's two classes
// aren't separable by any straight line. A hidden layer is what makes it
// solvable: it lets the network bend the decision boundary.
//
// Forward pass:
//   Z1 = dot(X, W1) + b1        (N, H)
//   A1 = sigmoid(Z1)            (N, H)
//   Z2 = dot(A1, W2) + b2       (N, 1)
//   A2 = sigmoid(Z2)            (N, 1)   <- final prediction
//
// Loss (binary cross-entropy, same as lesson 13):
//   L = -mean( y*log(A2) + (1-y)*log(1-A2) )
//
// Backward pass (chain rule, one layer at a time, back to front):
//   dZ2 = A2 - y                                (N, 1)  <- same clean form as lesson 13
//   dW2 = dot(A1^T, dZ2) / N                    (H, 1)
//   db2 = mean(dZ2)                             scalar
//   dA1 = dot(dZ2, W2^T)                        (N, H)  <- gradient flows backward through W2
//   dZ1 = dA1 * A1 * (1 - A1)                   (N, H)  <- sigmoid'(z) = sigmoid(z)*(1-sigmoid(z))
//   dW1 = dot(X^T, dZ1) / N                     (2, H)
//   db1 = mean(dZ1, axis=ROW)                   (1, H)  <- one gradient per hidden neuron
//
// Build & run:
//   make run-14_neural_network_from_scratch

#include "NumCpp.hpp"
#include <iostream>

nc::NdArray<double> sigmoid(const nc::NdArray<double>& z)
{
    return 1.0 / (1.0 + nc::exp(-z));
}

int main()
{
    nc::random::seed(1);

    // ---- 1. The XOR dataset: 4 examples, 2 features, 1 label ----
    nc::NdArray<double> X = {{0.0, 0.0}, {0.0, 1.0}, {1.0, 0.0}, {1.0, 1.0}};
    // Built as a row then transposed -- a column literal with one element
    // per inner list is ambiguous to the compiler (see lesson 05).
    nc::NdArray<double> y = nc::NdArray<double>{0.0, 1.0, 1.0, 0.0}.transpose();
    const double N = static_cast<double>(X.numRows());

    // ---- 2. Initialize weights small and random, biases at zero ----
    const int H = 4; // hidden layer width
    auto W1 = nc::random::uniform<double>(nc::Shape(2, H), -1.0, 1.0);
    auto b1 = nc::zeros<double>(nc::Shape(1, H));
    auto W2 = nc::random::uniform<double>(nc::Shape(H, 1), -1.0, 1.0);
    double b2 = 0.0;

    const double lr = 1.0;
    const int epochs = 10000;

    // ---- 3. Train with full-batch gradient descent ----
    for (int epoch = 0; epoch < epochs; ++epoch)
    {
        // --- forward ---
        auto Z1 = nc::dot(X, W1) + b1;
        auto A1 = sigmoid(Z1);
        auto Z2 = nc::dot(A1, W2) + b2;
        auto A2 = sigmoid(Z2);

        auto losses = -(y * nc::log(A2) + (1.0 - y) * nc::log(1.0 - A2));
        double loss = nc::mean(losses).item();

        // --- backward ---
        auto dZ2 = A2 - y;
        auto dW2 = nc::dot(A1.transpose(), dZ2) / N;
        double db2 = nc::mean(dZ2).item();

        auto dA1 = nc::dot(dZ2, W2.transpose());
        auto dZ1 = dA1 * A1 * (1.0 - A1);
        auto dW1 = nc::dot(X.transpose(), dZ1) / N;
        auto db1 = nc::mean(dZ1, nc::Axis::ROW);

        // --- update ---
        W2 -= dW2 * lr;
        b2 -= lr * db2;
        W1 -= dW1 * lr;
        b1 -= db1 * lr;

        if (epoch % 1000 == 0 || epoch == epochs - 1)
        {
            std::cout << "epoch " << epoch << "  loss=" << loss << "\n";
        }
    }

    // ---- 4. Check what the network learned ----
    auto A1Final = sigmoid(nc::dot(X, W1) + b1);
    auto A2Final = sigmoid(nc::dot(A1Final, W2) + b2);

    std::cout << "\nXOR truth table vs. network prediction:\n";
    for (nc::uint32 row = 0; row < X.numRows(); ++row)
    {
        double x0 = X(row, 0);
        double x1 = X(row, 1);
        double pred = A2Final(row, 0);
        double expected = y(row, 0);
        std::cout << "  x=(" << x0 << "," << x1 << ")  expected=" << expected
                   << "  predicted=" << pred << "  rounded=" << (pred > 0.5 ? 1 : 0)
                   << "\n";
    }

    return 0;
}
