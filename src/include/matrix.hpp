#include <cstddef>
#include <vector>
class matrix {
private:
  std::vector<float> matrixData;
  std::size_t colSize = 0;
  std::size_t rowSize = 0;

public:
  matrix(const std::size_t &rows, const std::size_t &cols);
  float getElement(const std::size_t &row, const std::size_t &col);
  void setElement(const std::size_t &row, const std::size_t &col, float &value);
};
