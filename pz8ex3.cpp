#include <iostream>
using namespace std;

int main() {
    const int size = 5; 
    int arr[size];

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int minIndex = 0, maxIndex = 0;  //дві змінні
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];  //міняються місцями найменший і найбільший індекс
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    cout << "Array after swapping:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << еndl;

    return 0;
}
