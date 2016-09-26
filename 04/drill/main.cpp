#include <iostream>
#include <vector>

int main() {

  std::cout << "Please enter two integers (CMD + D or | to terminate):"
            << std::endl;

  std::string input_01;
  std::string input_02;

  while((std::cin >> input_01 && std::cin >> input_02)
            && (input_01 != std::string("|")
                && input_02 != std::string("|"))) {
    std::cout << "Input 1: " << input_01 << std::endl;
    std::cout << "Input 2: " << input_02 << std::endl;
  }
  return 0;
}