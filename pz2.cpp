// Example program
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    
    double z;
    double x;
    double c;
    double Y;
    std::cout <<"Enter z value:";
    std::cin >> z;
    std::cout <<"Enter x value:";
    std::cin >> x;
    std::cout <<"Enter c value:";
    std::cin >> c;
    
    
    if (x<=1) {
        Y=((6*z*z-5)/3);
    } else {
        Y=((5*z*z-4)/12);
    }
    std::cout <<"Result: Y="<< Y
    << endl;
    
    return 0;
    
}
    
