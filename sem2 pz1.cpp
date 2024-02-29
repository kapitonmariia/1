#include <iostream>

using namespace std;

int main() {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    
    int *ptr = vector; 
    int min_element = *ptr; 
    int max_element = *ptr; 
    
    for(int i = 1; i < n; i++) {
        if(*(ptr + i) < min_element) { 
            min_element = *(ptr + i); 
        }
        if(*(ptr + i) > max_element) { 
            max_element = *(ptr + i); 
        }
    }
    
    cout << "Minimum element: " << min_element << endl;
    cout << "Maximum element: " << max_element << endl;
    
    return 0;
}
