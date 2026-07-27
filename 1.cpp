#include <iostream>

long long factorial(int n) {
    long long result = 1;

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int firstNumber, secondNumber;

    std::cout << "Enter two non-negative numbers: ";
    std::cin >> firstNumber >> secondNumber;

    if (firstNumber < 0 || secondNumber < 0) {
        std::cout << "Factorial is not defined for negative numbers.\n";
        return 1;
    }

    std::cout << "Factorial of " << firstNumber << " = " << factorial(firstNumber) << '\n';
    std::cout << "Factorial of " << secondNumber << " = " << factorial(secondNumber) << '\n';
    return 0;
}
