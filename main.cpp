   #include <iostream>
  #include "calculator.h"

  int main() {
      std::cout << "5 + 3 = " << Calculator::add(5, 3) << std::endl;
      std::cout << "5 - 3 = " << Calculator::subtract(5, 3) << std::endl;
      std::cout << "5 * 3 = " << Calculator::multiply(5, 3) << std::endl;
      
      try {
          std::cout << "5 / 3 = " << Calculator::divide(5, 3) << std::endl;
          std::cout << "5 / 0 = " << Calculator::divide(5, 0) << std::endl;
      } catch (const char* msg) {
          std::cerr << "Error: " << msg << std::endl;
      }
      
      return 0;
  }
  
