#include <iostream>
#include <cstdlib> // Для функції rand()
#include <ctime>   // Для функції time()

using namespace std;

int main() {
    // Встановлення генератора випадкових чисел з використанням часу
    srand(time(NULL));

    const int rows = 3;
    const int cols = 3;

    // Виділення пам'яті для двовимірного масиву
    int **matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Заповнення матриці випадковими значеннями
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 10; // Випадкове число від 0 до 9
        }
    }

    // Виведення елементів на головній діагоналі
    cout << "Elements on the main diagonal: ";
    for (int i = 0; i < rows; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    // Виведення елементів на побічній діагоналі
    cout << "Elements on the secondary diagonal: ";
    for (int i = 0; i < rows; ++i) {
        cout << matrix[i][rows - i - 1] << " ";
    }
    cout << endl;

    // Підрахунок кількості парних та непарних елементів масиву
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    // Виведення кількості парних та непарних елементів
    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    // Звільнення пам'яті, що була виділена для масиву
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
