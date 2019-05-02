#include <iostream>

int Factorial(int n) {
  int result = 1;
  while (n > 1) {
    result *= n;
    --n;
  }
  return result;
}

int main() {
  std::cout << "Testing a new feature..." << std::endl;

  std::cout << "3! = " << Factorial(3) << std::endl;
  
  return 0;
}
