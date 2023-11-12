#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100; 
    int arr[maxSize];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size > maxSize) {
        cout << "Error: Size exceeds the maximum allowed size.\n";
        return 1; 
    }

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int maxElement = arr[0];
    int secondMaxElement = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            secondMaxElement = maxElement;
            maxElement = arr[i];
        } else if (arr[i] > secondMaxElement && arr[i] < maxElement) {
            secondMaxElement = arr[i];
        }
    }

    cout << "Second largest element: " << secondMaxElement << endl;

    return 0;
}
