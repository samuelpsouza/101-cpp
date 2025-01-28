#include <iostream>
#include <format>
#include <typeinfo>

using std::format;
using std::cout;

int main()
{
    std::string s {"This is a stirng"};
    auto x = s;
    cout << format("x is {}\n", x);
    cout << format("type of x is {}\n", typeid(x).name());

    return 0;
}