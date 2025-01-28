#include <iostream>

int main()
{
    int array[] {1, 2, 3, 4, 5};
    int i {0};

    while(i < 5)
    {
        if (i == 3)
        {
            i++;
            break;
        }

        std::cout << "Element " << i << " is " << array[i] << std::endl;
        i++;
    }

    do
    {
        std::cout << "Element " << i << " is " << array[i] << std::endl;
        i++;
    } while (i < 5);
    
    for (int i {0}; i < 5; i++)
    {
        std::cout << "Element " << i << " is " << array[i] << std::endl;
    }

    const char string[] {"Hello, World!"};

    for(auto* p = string; *p; ++p)
    {
        std::cout << *p << std::endl;
    }

    for (const auto& c : string)
    {
        if(c == 0)
        {
            break;
        }
        std::cout << c << std::endl;
    }

    return 0;
}