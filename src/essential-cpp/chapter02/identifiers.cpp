/*

Can

    - ISO Latin Alphabet
    - Western Arabic Numerals
    - ASCII Underscore

Cannot

    - Use reserved words

Should

    - Keep your identifiers under 31 characters long

Shouldn't

    - An initial underscore character is reserved for system identifiers in the global namespace.
    Avoid using it in your own identifiers.
*/


#include <iostream>

int main() {
    int x {};
    std::cout << "The result is " << x << std::endl;
    
    return 0;
}