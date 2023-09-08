#include <iostream>
#include <cmath>

int main() {
    double a = 2;
    double b = 12.11;
    double result;

    result = (0.5 * (log(a + log(b))) / ((cos(pow(a + b, 2)) + exp(a)) * M_PI/6));

    std::cout << "Result: " << result << std::endl;

    return 0;
}
