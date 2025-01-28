#include <iostream>

using namespace std;

// a byte is 8 bits
const size_t b {8};

int main()
{
    float f {};
    double df {};
    long double ldf {};

    cout << "Size of float: " << (sizeof(f) * b) << " bits" << endl;
    cout << "Size of double: " << (sizeof(df) * b) << " bits" << endl;
    cout << "Size of long double: " << (sizeof(ldf) * b) << " bits" << endl;
}