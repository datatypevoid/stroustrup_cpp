#include <cmath>
#include <iostream>
#include <vector>

double calculate_percentage_difference(double x, double y);

int main() {

  double input = 0;

  double largest_value = 0;
  double smallest_value = 0;

  bool first_run = true;

  std::cout << "Please enter a number (CMD + D or | to terminate):"
            << std::endl;

  while(std::cin >> input && input != '|') {

    if(first_run) {
      smallest_value = input;
      largest_value = input;
      first_run = false;
      std::cout << "Your initial input: " << input << std::endl;
    }

    if(input > largest_value) {
      largest_value = input;
      std::cout << "The value " << input << " is the largest input "
                << "so far." << std::endl;
    } else if(input < smallest_value) {
      smallest_value = input;
      std::cout << "The value " << input << " is the smallest input "
                << "so far." << std::endl;
    }

    std::cout << "Please enter a number (CMD + D or | to terminate):"
              << std::endl;
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