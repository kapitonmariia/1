#include <iostream>
#include <cmath>

int main() {
    double a = 4;
    double b = 300.1;
    double result;

    result = 7.2 * pow((a + b), (1 + pow(cos(a), 2)) * (1 - cos(b)) + 0.711 * log(pow(a + b, 3)));

    std::cout << "Result: " << result << std::endl;

    return 0;
}
