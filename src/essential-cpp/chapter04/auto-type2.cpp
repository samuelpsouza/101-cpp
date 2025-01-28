#include <format>
#include <iostream>
#include <typeinfo>
#include <vector>

using std::cout;
using std::format;

int main()
{
    std::vector<int> vi{1, 2, 3, 4, 5};
    
    for(std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it)
    {
        cout << format("int is {}\n", *it);
        cout << format("tpye of it is {}\n", typeid(it).name());
    }

    for(auto it = vi.begin(); it != vi.end(); ++it)
    {
        cout << format("int is {}\n", *it);
        cout << format("tpye of it is {}\n", typeid(it).name());
    }


    return 0;
}