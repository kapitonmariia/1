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

    int indexOfFirstZero = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            indexOfFirstZero = i;
            break;
        }
    }

    if (indexOfFirstZero != -1) {
        cout << "Index of the first zero element: " << indexOfFirstZero << endl;
    } else {
        cout << "The array does not contain any zero elements.\n";
    }

    return 0;
}
