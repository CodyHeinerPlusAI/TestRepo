#include <iostream>
// Test comment

int Factorial(int n) {
  int result = 1;
  while (n > 1) {
    result *= n;
    --n;
  }
  return result;
}

int main() {
  std::cout << "3! = " << Factorial(3) << std::endl;
  
  return 0;
}
