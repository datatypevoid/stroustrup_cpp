// Chapter 4 Try This - Currency Conversion

#include <iostream>

int main() {

    constexpr double yen_per_dollar = 0.0099;
    constexpr double euro_per_dollar = 1.12;
    constexpr double pounds_per_dollar = 1.30;

    double amount = 1;
    char currency = ' ';

    std::cout << "Please enter an amount followed by a currency [(y)en, (e)uro, or (p)ound]:\n";
    std::cin >> amount >> currency;

    if (currency == 'y')
        std::cout << amount << " yen == " << yen_per_dollar * amount << " dollars\n";
    else if (currency == 'e')
        std::cout << amount << " euros == " << euro_per_dollar * amount << " dollars\n";
    else if (currency == 'p')
        std::cout << amount << " pounds == " << pounds_per_dollar * amount << " dollars\n";
    else
        std::cout << "Sorry, I don't know a currency called '" << currency << "'\n";
}
