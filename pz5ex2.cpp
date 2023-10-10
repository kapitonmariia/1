#include <iostream>
#include <cmath>

int main() {
    int sumOfRoots = 0;
    int numberOfNumbers = 20;

    // Calculate the sum of square roots of numbers from 1 to 20
    for (int i = 1; i <= numberOfNumbers; ++i) {
        sumOfRoots += std::sqrt(i);
    }

    // Calculate the average of the square roots
    double averageRoots = static_cast<double>(sumOfRoots) / numberOfNumbers;

    std::cout << "Average of square roots of numbers from 1 to 20: " << averageRoots << std::endl;

    return 0;
}
