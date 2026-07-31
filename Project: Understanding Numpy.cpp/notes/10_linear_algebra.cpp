// Lesson 10: Linear algebra
//
// Real matrix multiplication is `nc::dot` or `nc::matmul` (they're aliases
// of each other for real matrices) -- NOT the `*` operator, which is
// elementwise (see lesson 04). This distinction is the single most common
// source of bugs when porting numpy code to NumCpp (or vice versa), and it's
// exactly the same distinction numpy makes between `a * b` and `a @ b` /
// `np.dot(a, b)`.
//
// Matrix inverse/determinant live under the nc::linalg:: namespace.
//
// Build & run:
//   make run-10_linear_algebra

#include "NumCpp.hpp"
#include <iostream>

int main()
{
    nc::NdArray<double> a = {{1.0, 2.0}, {3.0, 4.0}};
    nc::NdArray<double> b = {{5.0, 6.0}, {7.0, 8.0}};

    std::cout << "a =\n" << a;
    std::cout << "b =\n" << b;

    // Elementwise multiply (recap from lesson 04) vs. true matrix multiply.
    std::cout << "\na * b        (elementwise) =\n" << (a * b);
    std::cout << "nc::dot(a,b) (matrix mult) =\n" << nc::dot(a, b);
    std::cout << "nc::matmul(a,b) (same thing) =\n" << nc::matmul(a, b);

    // Matrix-vector product: (2x2) dot (2x1) -> (2x1)
    nc::NdArray<double> v = nc::NdArray<double>{1.0, 0.0}.transpose(); // column
    std::cout << "\na dot v (matrix-vector) =\n" << nc::dot(a, v);

    // Transpose-then-multiply -- the "a^T a" pattern used constantly in ML
    // (normal equations, computing covariance, Gram matrices, ...).
    std::cout << "\ndot(a.transpose(), a) =\n" << nc::dot(a.transpose(), a);

    // Determinant and inverse live in nc::linalg.
    std::cout << "\ndet(a) = " << nc::linalg::det(a) << "\n";
    auto aInv = nc::linalg::inv(a);
    std::cout << "inv(a) =\n" << aInv;

    // Sanity check: a dot inv(a) should be (approximately) the identity.
    std::cout << "a dot inv(a) =\n" << nc::dot(a, aInv);

    // Vector norm (magnitude / length). Note nc::norm returns an NdArray
    // (a 1x1 one here), not a bare scalar -- consistent with numpy's
    // np.linalg.norm always returning an array-like result.
    nc::NdArray<double> vec = {3.0, 4.0};
    std::cout << "\nnorm([3,4]) = " << nc::norm(vec); // [[5]]

    return 0;
}
