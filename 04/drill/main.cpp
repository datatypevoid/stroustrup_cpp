#include <cmath>
#include <iostream>
#include <vector>

double calculate_percentage_difference(double x, double y);

int main() {

  std::cout << "Please enter two integers (CMD + D or | to terminate):"
            << std::endl;

  double input_01;
  double input_02;

  double constexpr percent_difference_threshold = 1;

  while((std::cin >> input_01 && std::cin >> input_02)
            && (input_01 != '|') && input_02 != '|') {
    if(input_01 > input_02) {
      std::cout << "The smaller value is: " << input_02 << std::endl;
      std::cout << "The larger value is: " << input_01 << std::endl;
    } else if (input_01 < input_02) {
      std::cout << "The smaller value is: " << input_01 << std::endl;
      std::cout << "The larger value is: " << input_02 << std::endl;
    } else if (input_01 == input_02) {
      std::cout << "The value " << input_01 << " is equal to value "
                << input_02 << std::endl;
    }
    if(calculate_percentage_difference(input_01, input_02)
         <= percent_difference_threshold) {
      std::cout << "The numbers are within one percent of each other"
                << std::endl;
    }
  }
  
  return 0;
}

/**
 * Calculates the difference between two inputs
 * @param x - numeric input of type `double`
 * @param y - numeric input of type `double`
 * @return double - percentage difference between `x` and `y`
 */
double calculate_percentage_difference(double x, double y) {
  return (std::abs(x - y) / ((x + y) / 2)) * 100;
}