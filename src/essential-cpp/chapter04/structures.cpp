#include <iostream>
#include <format>

using std::format;
using std::cout;
using std::endl;

struct S {
    int i {};
    double d {};
    const char* s {};
};

int main()
{
    S s1 {3, 3.14, "pi"};
    cout << format("s1: {}, {}, {}", s1.i, s1.d, s1.s) << endl;
    return 0;
}