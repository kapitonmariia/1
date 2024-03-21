#include <iostream>
#include <cstdlib> // Для функції rand()
#include <ctime>   // Для функції time()

using namespace std;

int main() {
    // Встановлення генератора випадкових чисел з використанням часу
    srand(time(NULL));

    int n; // Розмір масиву
    cout << "Enter the size of the array: ";
    cin >> n;

    // Виділення пам'яті для масиву
    float *arr = new float[n];

    // Заповнення масиву випадковими значеннями з діапазону (-2, 2)
    for (int i = 0; i < n; ++i) {
        arr[i] = static_cast<float>(rand()) / (RAND_MAX / 4) - 2;
    }

    // Підрахунок кількості додатних і від'ємних чисел
    int positiveCount = 0;
    int negativeCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    // Виведення результатів
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;

    // Звільнення пам'яті, що була виділена для масиву
    delete[] arr;

    return 0;
}
