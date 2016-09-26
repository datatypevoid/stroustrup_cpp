// Chapter 4 Try This - Currency Conversion with Switch Statement

#include <iostream>

int main() {

    constexpr double dollar_per_yen = 0.0099;
    constexpr double dollar_per_euro = 1.12;
    constexpr double dollar_per_pound = 1.30;
    constexpr double dollar_per_kroner = 0.15;
    constexpr double dollar_per_yuan = 0.15;

    double amount = 1;
    char currency = ' ';

    std::cout << "Please enter an amount followed by a currency [(Y)en, (e)uro, (p)ound, (y)uan, or (k)roner]:\n";
    std::cin >> amount >> currency;

    switch(currency) {
        case 'Y':
            std::cout << amount << " yen == " << dollar_per_yen * amount << " dollars\n";
            break;
        case 'e':
            std::cout << amount << " euros == " << dollar_per_euro * amount << " dollars\n";
            break;
        case 'p':
            std::cout << amount << " pounds == " << dollar_per_pound * amount << " dollars\n";
            break;
        case 'k':
            std::cout << amount << " kroner == " << dollar_per_kroner * amount << " dollars\n";
            break;
        case 'y':
            std::cout << amount << " yuan == " << dollar_per_yuan * amount << " dollars\n";
            break;
        default:
            std::cout << "Sorry, I don't know a currency called '" << currency << "'\n";
            break;
    }
}
