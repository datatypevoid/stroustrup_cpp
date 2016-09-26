// Chapter 4 Try This - Currency Conversion

#include "../../std_lib_facilities.h"

int main() {

    constexpr double yen_per_dollar = 0.0099;
    constexpr double euro_per_dollar = 1.12;
    constexpr double pounds_per_dollar = 1.30;

    double amount = 1;
    char currency = ' ';

    cout << "Please enter an amount followed by a currency [(y)en, (e)uro, or (p)ound]:\n";
    cin >> amount >> currency;

    if (currency == 'y')
        cout << amount << " yen == " << yen_per_dollar * amount << " dollars\n";
    else if (currency == 'e')
        cout << amount << " euros == " << euro_per_dollar * amount << " dollars\n";
    else if (currency == 'p')
        cout << amount << " pounds == " << pounds_per_dollar * amount << " dollars\n";
    else
        cout << "Sorry, I don't know a currency called '" << currency << "'\n";
}
