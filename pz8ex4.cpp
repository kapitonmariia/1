#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100; 
    int arr[maxSize];
    int size;

   cout << "Enter the size of the array: ";
    cin >> size;

   if (size > maxSize) {
        std::cout << "Error: Size exceeds the maximum allowed size.\n";
        return 1; 
    }

   cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int A;
    cout << "Enter the number A: ";
    cin >> A;

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > A) {
            count++;
        }
    }

    cout << "Number of elements greater than A: " << count << std::endl;

    return 0;
}
