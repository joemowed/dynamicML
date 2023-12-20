#include "matrix.hpp"
#include <cstddef>
matrix::matrix(const std::size_t &rowSize, const std::size_t &colSize) {
  matrixData.resize(rowSize * colSize);
  matrix::rowSize = rowSize;
  matrix::colSize = colSize;
}
float matrix::getElement(const std::size_t &row, const std::size_t &col) {
  return matrix::matrixData.at((matrix::rowSize * row) + col);
}
void matrix::setElement(const std::size_t &row, const std::size_t &col,
                        float &value) {
  matrix::matrixData.at((matrix::rowSize * row) + col) = value;
}
