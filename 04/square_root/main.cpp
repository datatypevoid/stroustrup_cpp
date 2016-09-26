// Chapter 4, try this now exercise: implement `square()` without the
// multiplication operator

#include <iostream>

int square(int input);

int main() {

  int input = 0;
  int result = 0;

  std::cout << "Please enter the number you would like to square: ";
  std::cin >> input;

  std::cout << "\nCalculating the square root of " << input << " ...\n"
            << std::endl;

  result = square(44);

  std::cout << "The square of " << input << " is " << result
            << std::endl;

  return 0;
}

/**
 * Takes an input and returns the square of it
 * @param input - integer to be squared
 * @return int
 */
int square(int input) {

  int result = 0;

  for(int i = 0; i < input; i++) {
    result += input;
  }

  return result;
}