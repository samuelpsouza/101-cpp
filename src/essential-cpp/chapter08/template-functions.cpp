#include <iostream>
#include <format>

using std::format;
using std::cout;
using std::endl;

template<typename T>
T maxof(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int x {47};
    int y {74};

    double r {27.0};
    double q {18.0};

    auto max_int = maxof<int>(x, y);
    auto max_double = maxof<double>(r, q);

    cout << format("max is {}", max_int) << endl;
    cout << format("max is {}", max_double) << endl;

    return 0;
}