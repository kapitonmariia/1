#include <iostream>
#include <cmath>

int main() {
    int num_values = 5;
    double x_values[num_values];

    // Input values of x from the keyboard
    std::cout << "Enter " << num_values << " different values of x:\n";
    for (int i = 0; i < num_values; ++i) {
        std::cout << "x" << i + 1 << ": ";
        std::cin >> x_values[i];
    }

    // Compute and output the values of the function y for the entered x values
    std::cout << "\nComputed results:\n";
    for (int i = 0; i < num_values; ++i) {
        double y = sin(5 * x_values[i]) + x_values[i] - pow(x_values[i], 5);
        std::cout << "For x" << i + 1 << " = " << x_values[i] << ", y = " << y << "\n";
    }

    return 0;
}
