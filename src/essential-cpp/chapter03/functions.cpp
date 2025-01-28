#include <iostream>

void func()
{
    std::cout << "This is func()\n" << std::endl;
}

void func2(int i)
{
    std::cout << "This is func2() with argument " << i << std::endl;
}

void func3(int i, const char* s)
{
    std::cout << "This is func3() with arguments " << i << " and " << s << std::endl;
}

int main()
{
    std::cout << "This is main()" << std::endl;
    func();
    func2(2);
    func3(3, "Hello, World!");
    return 0;
}