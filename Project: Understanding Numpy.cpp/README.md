# Understanding NumPy.cpp

A progressive series of small, heavily-commented C++ programs that teach
[NumCpp](https://github.com/dpilger26/NumCpp) — a header-only C++ library that
mirrors NumPy's API (`nc::NdArray`, `nc::zeros`, `nc::dot`, broadcasting,
slicing, linear algebra, random, etc.).

The series climbs from "what is an array" all the way up to a tiny neural
network trained with backpropagation — using **only** NdArray operations, no
external ML framework.

## Layout

```
third_party/NumCpp/   vendored copy of the NumCpp library (headers only, no build step)
notes/                the numbered lesson files, read them in order
Makefile              build/run helper
```

## Requirements

- g++ with C++17 support (already checked: works with no Boost dependency)
- Nothing else — NumCpp is vendored locally in `third_party/NumCpp`

## How to use this

Each file in `notes/` is self-contained: read the comments top to bottom, then
build and run it to see the output for yourself.

```bash
make list                        # see every lesson
make run-01_arrays_and_dtypes    # build + run a single lesson
make                              # build everything into build/
```

## Lesson order

| # | File | Topic |
|---|------|-------|
| 01 | `01_arrays_and_dtypes.cpp` | What an `NdArray` is, shape, size, dtype |
| 02 | `02_array_creation.cpp` | zeros/ones/arange/linspace/eye, from `std::vector` |
| 03 | `03_indexing_and_slicing.cpp` | Element access, rows/cols, slices |
| 04 | `04_elementwise_math.cpp` | +,-,*,/, comparisons, math functions |
| 05 | `05_broadcasting.cpp` | Scalar-array and shape-mismatched ops |
| 06 | `06_reshaping_and_transpose.cpp` | reshape, flatten, transpose |
| 07 | `07_reductions_stats.cpp` | sum, mean, std, min/max, argmax, axis reductions |
| 08 | `08_boolean_masking.cpp` | Boolean masks, filtering, `nc::where` |
| 09 | `09_stacking_and_concatenation.cpp` | hstack, vstack, concatenate |
| 10 | `10_linear_algebra.cpp` | dot product, matmul, transpose-multiply, inverse |
| 11 | `11_random_numbers.cpp` | seeding, uniform/normal distributions |
| 12 | `12_linear_regression.cpp` | Fitting `y = wx + b` with manual gradient descent |
| 13 | `13_logistic_regression.cpp` | Binary classifier, sigmoid, cross-entropy loss |
| 14 | `14_neural_network_from_scratch.cpp` | Small MLP (forward + backprop) trained on XOR |

By lesson 14 you've built, from raw array operations, the same math that
underlies real neural network training: matrix multiplies, activation
functions, a loss function, gradients, and a weight-update loop.
