#include <iostream>

int main() {
    int N;

    // Input a three-digit positive number
    std::cout << "Enter a three-digit positive number: ";
    std::cin >> N;

    // Check for positivity and three-digit number
    if (N < 100 || N > 999) {
        std::cout << "The number is not three-digit or positive.\n";
        return 1;
    }

    // Decompose the number into digits
    int digit1 = N / 100;  // Hundreds
    int digit2 = (N / 10) % 10;  // Tens
    int digit3 = N % 10;  // Units

    // Counter for digits less than 7
    int countLessThan7 = 0;

    // Check each digit for less than 7
    if (digit1 < 7)
        countLessThan7++;
    if (digit2 < 7)
        countLessThan7++;
    if (digit3 < 7)
        countLessThan7++;

    // Display the results
    std::cout << "Digits of the number " << N << ": " << digit1 << ", " << digit2 << ", " << digit3 << "\n";
    std::cout << "Count of digits less than 7: " << countLessThan7 << "\n";

    return 0;
}
