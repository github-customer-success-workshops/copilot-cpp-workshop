#include "Calculator.h"

int main() {
    Calculator calculator;
    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
    case '+':
        std::cout << "Result: " << calculator.add(num1, num2) << "\n";
        break;
    case '-':
        std::cout << "Result: " << calculator.subtract(num1, num2) << "\n";
        break;
    case '*':
        std::cout << "Result: " << calculator.multiply(num1, num2) << "\n";
        break;
    case '/':
        std::cout << "Result: " << calculator.divide(num1, num2) << "\n";
        break;
    default:
        std::cout << "Invalid operation!" << "\n";
    }

}
