#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    auto condition = true;

    /*
        use true or false
        use 0 (false)
        use 1, 2, ... (true)
        use "" (true)
    */

    if(condition) {
        cout << "Condition is true" << endl;
    } else {
        cout << "Condition is false" << endl;
    }

    // Ternary

    auto s = 1 > 2 ? "true" : "false";

    cout << s << endl;
    return 0;
}