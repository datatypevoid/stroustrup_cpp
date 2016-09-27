// Chapter 04, try this now exercise: use for loop to write out a table of
// characters with corresponding integer values

#include <iostream>

int main() {

  constexpr int alphabet_length = 25;

  constexpr int lowercase_starting_index = 0;

  constexpr int uppercase_starting_index = 224;

  constexpr int digit_starting_index = 207;

  constexpr int digit_ending_index = 216;


  std::cout << "\nPrinting lowercase characters [a - z] : \n"
            << std::endl;

  for(int i = lowercase_starting_index; i <= alphabet_length; i++) {
    std::cout << char('a' + i) << "\t" << i << std::endl;
  }

  std::cout << "\nPrinting uppercase characters [A - Z] : \n"
            << std::endl;

  for(int i = uppercase_starting_index;
          i <= uppercase_starting_index + alphabet_length;
          i++) {
    std::cout << char('a' + i) << "\t" << i << std::endl;
  }

  std::cout << "\nPrinting standard digits [0 - 9] : \n" << std::endl;

  for(int i = digit_starting_index; i <= digit_ending_index; i++) {
    std::cout << char('a' + i) << "\t" << i << std::endl;
  }
}