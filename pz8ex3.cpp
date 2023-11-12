#include <iostream>

int main() {
    const int size = 5; // Set the size of the array
    int arr[size];

    // User input to fill the array
    std::cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Find the indices of the minimum and maximum elements
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap values between the minimum and maximum elements
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Print the resulting array
    std::cout << "Array after swapping:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
