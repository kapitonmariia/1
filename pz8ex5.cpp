#include <iostream>

using namespace std;

int main() {
    const int Size = 5;
    int numbers[Size];

    srand(time(0));

    for (int i = 0; i < Size; ++i) {
        numbers[i] = rand() % 100; 
    }

    cout << "The original array: ";
    for (int i = 0; i < Size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    
    sort(numbers, numbers + Size, greater<int>());

    int secondLargest = numbers[1];

    cout << "The second bigger number: " << secondLargest << endl;

    return 0;
}
