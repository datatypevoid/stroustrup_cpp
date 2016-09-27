#include <cmath>
#include <iostream>
#include <vector>

double calculate_percentage_difference(double x, double y);

bool contains(std::string input,
              std::vector<std::string> v);

double centimeters_to_meters(double x);

void display_instruction();

double feet_to_inches(double x);

double inches_to_centimeters(double x);

double process_input(double input, std::string unit);

std::vector<std::string> const valid_units = { "cm",
                                               "m",
                                               "in",
                                               "ft" };

int main() {

  double input = double();
  std::string unit = std::string();

  std::vector<double> converted_inputs = {};

  double largest_value = double();
  double smallest_value = double();
  double sum = double();

  bool first_run = true;

  display_instruction();

  while(std::cin >> input >> unit && input != '|') {
    if (!contains(unit, valid_units)) {
      std::cout << "The unit '" << unit << "' is not recognized. "
                << "Please try again." << std::endl;
      std::cout << "\nValid representations of units are:"
                << "\n\tcm\n\tm\n\tin\n\tft\n" << std::endl;
    } else {

      double input_as_meters = process_input(input, unit);

      converted_inputs.push_back(input_as_meters);

      if (first_run) {
        smallest_value = input_as_meters;
        largest_value = input_as_meters;
        first_run = false;
        std::cout << "Your initial input: " << input << " " << unit
                  << " (" << input_as_meters << " " << valid_units[1]
                  << ")" << std::endl;
      }

      if (input_as_meters > largest_value) {
        largest_value = input_as_meters;
        std::cout << "The value " << input << " " << unit << " ("
                  << input_as_meters << " " << valid_units[1] << ")"
                  << " is the largest input so far." << std::endl;
      } else if (input_as_meters < smallest_value) {
        smallest_value = input_as_meters;
        std::cout << "The value " << input << " " << unit << " ("
                  << input_as_meters << " " << valid_units[1] << ")"
                  << " is the smallest input so far." << std::endl;
      }

      sum += input_as_meters;
    }

    display_instruction();
  }

  if(!first_run) {

    sort(converted_inputs.begin(), converted_inputs.end());

    std::cout << "\nValues entered:\n" << std::endl;

    for (int i = 0; i < converted_inputs.size(); ++i) {
      std::cout << "\t" << converted_inputs[i] << " " << valid_units[1] << std::endl;
    }

    std::cout << "\nThe sum of all values entered totals to: " << sum
              << " " << valid_units[1] << std::endl;

    std::cout << "The value " << smallest_value << " "
              << valid_units[1] << " is the smallest input entered."
              << std::endl;

    std::cout << "The value " << largest_value << " " << valid_units[1]
              << " is the largest input entered." << std::endl;

    std::cout << "Number of values input: " << converted_inputs.size()
              << std::endl;
  }

  std::cout << "\nProcess terminating..." << std::endl;

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

/**
 * Converts a value in centimeters to meters
 * @param x - input in centimeters
 * @return double - value converted to meters
 */
double centimeters_to_meters(double x) {

  double constexpr centimeters_per_meter = 100;

  return x / centimeters_per_meter;
}

/**
 * Checks if a vector contains a string
 * @param input - string subject to check
 * @param v - vector containing strings to check our input against
 * @return bool - whether or not the vector contains the given string
 */
bool contains(std::string input,
              std::vector<std::string> v) {
  return v.end() != std::find(v.begin(), v.end(), input);
}

/**
 * Displays the instruction message to the user
 */
void display_instruction() {
  std::cout << "Please enter a measurement { ex: 4 cm, 12 m, 14 in, "
      "16 ft } (CMD + D or | to terminate):" << std::endl;
}

/**
 * Converts a value in feet to inches
 * @param x - input in feet
 * @return double - value converted to inches
 */
double feet_to_inches(double x) {

  double constexpr inches_per_feet = 12;

  return x * inches_per_feet;
}

/**
 * Converts a value in inches to centimeters
 * @param x - input in inches
 * @return double - value converted to centimeters
 */
double inches_to_centimeters(double x) {

  double constexpr centimeters_per_inch = 2.54;

  return x * centimeters_per_inch;
}

double process_input(double input, std::string unit) {

  double input_as_meters = double();

  if(unit == valid_units[0]) {
    input_as_meters = centimeters_to_meters(input);
  } else if(unit == valid_units[1]) {
    input_as_meters = input;
  } else if(unit == valid_units[2]) {
    input_as_meters = centimeters_to_meters(
        inches_to_centimeters(input));
  } else if(unit == valid_units[3]) {
    input_as_meters = centimeters_to_meters(
        inches_to_centimeters(
            feet_to_inches(input)));
  }

  return input_as_meters;
}