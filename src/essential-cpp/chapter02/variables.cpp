#include <iostream>

int main() {
    const int x {};
    std::cout << "The result is " << x << std::endl;
    
    // x = 2; expression must be a modifiable lvalueC/C++(137)

    auto y = 2;
    auto z = {3};

    // auto a {}; Cannot do this

    return 0;
}