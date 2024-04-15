
#ifndef OPENMP_NN_MATRIX_HPP
#define OPENMP_NN_MATRIX_HPP


#include "tensor.hpp"

class Matrix : public Tensor {
public:
    // Standard constructor
    explicit Matrix(const std::vector<unsigned int> &shape) : Tensor(shape) {};
    // Custom string representation for print
    void print(std::ostream& where) const override;
};


#endif //OPENMP_NN_MATRIX_HPP
