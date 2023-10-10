#include <iostream>
#include <cmath>

int main() {
    double a, b, h;
    std::cout << "Enter the values of a, b, and step h: ";
    std::cin >> a >> b >> h;

    std::cout << "-------------------" << std::endl;
    std::cout << ":  X  :  Y  :" << std::endl;
    std::cout << "-------------------" << std::endl;

    // Tabulate and display the results
    for (double x = a; x <= b; x += h) {
        if (x * x <= 9) {
            double y = std::pow(x, 5) - std::sqrt(9 - x * x);
            std::cout << ": " << x << " : " << y << " :" << std::endl;
        } else {
            std::cout << "The value of x is not in the domain." << std::endl;
            break;
        }
    }

    std::cout << "-------------------" << std::endl;

    return 0;
}
