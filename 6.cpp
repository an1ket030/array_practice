#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    if (!(std::cin >> s)) return 0; // read input number as string

    bool negative = !s.empty() && s[0] == '-';
    std::string digits = negative ? s.substr(1) : s;

    std::reverse(digits.begin(), digits.end());

    // remove leading zeros that may appear after reversal
    size_t first_non_zero = digits.find_first_not_of('0');
    if (first_non_zero == std::string::npos) {
        std::cout << 0 << '\n';
        return 0;
    }
    digits = digits.substr(first_non_zero);

    if (negative) std::cout << '-';
    std::cout << digits << '\n';
    return 0;
}