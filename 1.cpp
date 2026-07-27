#include <iostream>

int main() {
    int n;
    long long factorial = 1;

    std::cout << "Enter a non-negative number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers.\n";
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " = " << factorial << '\n';
    return 0;
}
