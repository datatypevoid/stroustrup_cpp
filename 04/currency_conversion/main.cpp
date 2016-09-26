// Chapter 4 Try This - Currency Conversion

#include <iostream>

int main() {

    constexpr double dollar_per_yen = 0.0099;
    constexpr double dollar_per_euro = 1.12;
    constexpr double dollar_per_pound = 1.30;

    double amount = 1;
    char currency = ' ';

    std::cout << "Please enter an amount followed by a currency [(y)en, (e)uro, or (p)ound]:\n";
    std::cin >> amount >> currency;

    if (currency == 'y')
        std::cout << amount << " yen == " << dollar_per_yen * amount << " dollars\n";
    else if (currency == 'e')
        std::cout << amount << " euros == " << dollar_per_euro * amount << " dollars\n";
    else if (currency == 'p')
        std::cout << amount << " pounds == " << dollar_per_pound * amount << " dollars\n";
    else
        std::cout << "Sorry, I don't know a currency called '" << currency << "'\n";
}
