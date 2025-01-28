#include <iostream>
#include <format>

using std::cout;
using std::endl;
using std::format;

/*
    CV Qualifiers
     - const
     - mutable
     - volatile

    Storage Duration
     - static 
     - register
     - extern
*/

int func()
{
    static int x {1};
    ++x;
}

int main()
{
    const int i {42};
    // i = 41; Cannot do that

    cout << "func() return is " << func() << std::endl;
    return 0;
}