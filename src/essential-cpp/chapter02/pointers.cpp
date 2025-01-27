#include <iostream>

using std::cout;
using std::endl;

int main() {
    int x {3};

    int* int_pointer;
    int_pointer = &x;
    
    int y = *int_pointer;

    cout << "The value of x is " << x << endl;
    cout << "The address of integer pointer is " << int_pointer << endl;
    cout << "The value of integer pointer is " << *int_pointer << endl;
    cout << "The value of y is " << y << endl;
    return 0;
}