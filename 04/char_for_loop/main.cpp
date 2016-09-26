// Chapter 04, try this now exercise: use for loop to write out a table of
// characters with corresponding integer values

#include <iostream>

int main() {

    int i = 0;

    constexpr int limit = 30;

    for(int i = 0; i <= limit; i++) {
         std::cout << char('a' + i) << "\t" << i << std::endl;
    }

    for(int i = 224; i <= 224 + limit; i++) {
        std::cout << char('a' + i) << "\t" << i << std::endl;
    }
}