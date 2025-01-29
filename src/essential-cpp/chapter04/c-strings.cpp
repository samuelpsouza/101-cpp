#include <iostream>
#include <format>

using std::cout;
using std::endl;
using std::format;

int main()
{
    const char s[] {"string"};
    for(const auto& c:s)
    {
        cout << format("{}", c) << endl;
    }

    for(const auto* p = s; *p; ++p)
    {
        cout << format("{}", *p) << endl;
    }

    const char* s2 = "string";
    return 0;
}