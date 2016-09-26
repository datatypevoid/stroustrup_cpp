/**
 * Chapter 04: word censor `Try It Now` exercise
 */

#include <algorithm>
#include <iostream>
#include <random> 
#include <vector>

bool contains(std::string input,
              std::vector<std::string> dict);

int rng(int min, int max);

int main() {

  std::vector<std::string> words;

  std::vector<std::string> blacklist = { "nerfherder",
                                         "frak",
                                         "foodoo",
                                         "milkdrinker" };

  std::vector<std::string> grawlixes = { "@#$%&",
                                         "!!*?*!!@",
                                         "#@$%*!" };

  std::cout << "Please enter a series of words separated by spaces "
            << "(CMD + D to terminate input):" << std::endl;

  for(std::string temp; std::cin >> temp;) {
    words.push_back(temp);
  }

  std::cout << "Number of words: " << words.size() << std::endl;

  std::sort(words.begin(), words.end());

  for(int i = 0; i < words.size(); ++i) {
    if (i==0 || words[i - 1] != words[i]) {
      if(contains(words[i], blacklist)) {
        std::cout << grawlixes[rng(0,2)] << std::endl;
      } else {
        std::cout << words[i] << std::endl;
      }
    }
  }

  return 0;
}

/**
 * Checks if a vector contains a string
 * @param input - string subject to check
 * @param v - vector containing strings to check our input against
 * @return bool - whether or not the vector contains the given string
 */
bool contains(std::string input,
              std::vector<std::string> v) {
  if(v.end() != std::find(v.begin(), v.end(), input)) {
    return true;
  }
}

/**
 * Generates a random number within a given range; inclusive
 * @param min - minimum number to be considered
 * @param max - maximum number to be considered
 * @return int - generated number
 */
int rng(int min, int max) {
  // Seed the time
  std::mt19937 rng(time(NULL));
  // Uniform; unbiased
  std::uniform_int_distribution<int> gen(min, max);

  // Generate number and assign to variable
  return gen(rng);
}