#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int SIZE = 5;
    int array[SIZE][SIZE];
    srand(time(nullptr));

    for (int *ptr = &array[0][0], *end = &array[SIZE][0]; ptr < end; ++ptr)
        *ptr = rand() % 101;

    cout << "Elements on the main diagonal:" << endl;
    for (int *ptr = &array[0][0]; ptr < &array[SIZE][0]; ptr += SIZE + 1)
        cout << *ptr << " ";
    cout << endl;

    cout << "Elements on the secondary diagonal:" << endl;
    for (int *ptr = &array[0][SIZE - 1]; ptr >= &array[0][0]; ptr -= SIZE - 1)
        cout << *ptr << " ";
    cout << endl;

    int even_count = 0, odd_count = 0;
    for (int *ptr = &array[0][0], *end = &array[SIZE][0]; ptr < end; ++ptr)
        (*ptr % 2 == 0) ? even_count++ : odd_count++;

    cout << "Number of even elements: " << even_count << endl;
    cout << "Number of odd elements: " << odd_count << endl;

    return 0;
}
