#include <iostream>

int* resize(const int* a, size_t k, size_t d, int filler);
int * add_row(const int* a, size_t n, size_t m, int filler);

int main()
{
  int* a = new int[6]{1,2,3,4,5,6};
  int k = 10;
  int* b = add_row(a, 2, 3, 0);
  for (size_t i = 0; i < 3; ++i) {
  for (size_t j = 0; j < 3; ++j) {
    std::cout << b[i*3 + j] <<'\t';
  }
  std::cout << '\n';
}
  delete[] a;
  delete[] b;
}

int* resize(const int* a, size_t k, size_t d, int filler)
{
  int* newArr = new int[d];
  if (d > k) {
    size_t i = 0;
    for (; i < k; i++) {
      newArr[i] = a[i];
    }
    for (; i < d; i++) {
      newArr[i] = filler;
    }
  } else {
    size_t i = 0;
    for (; i < d; i++) {
      newArr[i] = a[i];
    }
  }
  return newArr;
}

int * add_row(const int* a, size_t n, size_t m, int filler)
{
  return resize(a, n*m, (n+1)*m, filler);
}

