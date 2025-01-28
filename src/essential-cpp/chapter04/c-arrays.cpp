#include <iostream>
#include <format>

using std::format;
using std::cout;
using std::endl;

int main()
{
    int array[] {1, 2, 3, 4, 5};

    for(const auto& i : array )
    {
        cout << format("{} ", i);
    }

    cout << endl;
    return 0;
}