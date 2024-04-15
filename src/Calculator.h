#include <iostream>
#include <cmath> // Include the cmath library for NaN

class Calculator {
public:
    double add(double num1, double num2) {
        double added_result = num1 + num2;
        return added_result;
    }

    double subtract(double num1, double num2) {
        double subtracted_result = num1 - num2;
        return subtracted_result;
    }

    double multiply(double num1, double num2) {
        double multiplied_result = num1 * num2;
        return multiplied_result;
    }

   double divide(double num1, double num2) {
        double divided_result = 0;
        if (num2 != 0) {
            divided_result = num1 / num2;
            return divided_result;
        }
        else {
            std::cerr << "Error! Division by zero is not allowed.\n";
            divided_result = std::numeric_limits<double>::quiet_NaN();
            return divided_result;
        }
    }


};

