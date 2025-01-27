#include <format>
#include <iostream>

using std::cout;
using std::format;

int main() {
    int x;
    x = 42 * 12 + 14;
    
    auto str = format("The result is {}\n", x);
    cout << str;
    
    return 0;
}