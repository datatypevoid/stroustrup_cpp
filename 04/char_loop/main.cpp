// Chapter 04, try this now exercise: use loop to write out a table of
// characters with corresponding integer values

#include <iostream>

int main() {

    int i = 0;

    constexpr int limit = 30;

    while(i <= limit) {
        std::cout << char('a' + i) << "\t" << i << std::endl;
        ++i;
    }
}