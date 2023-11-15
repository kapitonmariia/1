#include <iostream>

using namespace std;

int main() {
    const int Size = 5; 
    int numbers[Size];
    int A;

    cout << "Enter number A: ";
    cin >> A;

     srand(time(0));

    for (int i = 0; i < Size; ++i) {
        numbers[i] = rand() % 100; 
    }

    cout << "The original array: ";
    for (int i = 0; i < Size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int count = 0;
    for (int i = 0; i < Size; ++i) {
        if (numbers[i] > A) {
            count++;
        }
    }

    cout << "Number of elements greater than " << A << ": " << count << endl;

    return 0;
}
