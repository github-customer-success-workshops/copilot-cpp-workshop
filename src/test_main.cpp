#include <cassert>
#include <cmath>
#include "Calculator.h" // Include your Calculator class

int main() {
    // Test add()
    assert(Calculator::add(1, 1) == 2);
    assert(Calculator::add(1, -1) == 0);
    assert(Calculator::add(1, 0) == 1);

    // Test subtract()
    assert(Calculator::subtract(5, 3) == 2);
    assert(Calculator::subtract(5, -3) == 8);
    assert(Calculator::subtract(5, 0) == 5);

    // Test multiply()
    assert(Calculator::multiply(2, 3) == 6);
    assert(Calculator::multiply(2, -3) == -6);
    assert(Calculator::multiply(2, 0) == 0);

    // Test divide()
    assert(Calculator::divide(6, 3) == 2);
    assert(Calculator::divide(6, -3) == -2);
    assert(std::isnan(Calculator::divide(6, 0)));

    std::cout << "All tests passed!\n";

}
