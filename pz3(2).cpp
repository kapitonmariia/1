#include <iostream>

int main() {
    char cityFirstLetter;
    int population, area;

    std::cout << "Enter the first letter of the city: ";
    std::cin >> cityFirstLetter;

    switch (cityFirstLetter) {
        case 'A':
        case 'a':
            population = 1000000; // Assume a population for city starting with 'A'
            area = 500; // Assume an area for city starting with 'A'
            break;
        case 'B':
        case 'b':
            population = 800000; // Assume a population for city starting with 'B'
            area = 700; // Assume an area for city starting with 'B'
            break;
        case 'C':
        case 'c':
            population = 1200000; // Assume a population for city starting with 'C'
            area = 600; // Assume an area for city starting with 'C'
            break;
        default:
            std::cout << "City information not available for the provided first letter.\n";
            return 1;
    }

    std::cout << "City population: " << population << " people\n";
    std::cout << "City area: " << area << " square kilometers\n";

    return 0;
}

