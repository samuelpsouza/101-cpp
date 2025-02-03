#include <iostream>
#include <format>

using std::format;
using std::cout;
using std::endl;

void func()
{
    cout << "This is func()" << endl;
}

int main()
{
    cout << "This is main()" << endl;
    func();
    return 0;
}