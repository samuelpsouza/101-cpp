#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int operator(int a, int b, int (*f)(int, int))
{
    return (*f)(a, b);
}

int main(int argc, char const *argv[])
{
    int a = 2, b = 2;

    int sum_response = operator(a, b, &sum);
    int subtraction_response = operator(a, b, &subtraction);
    int multiplication_response = operator(a, b, &multiplication);
    
    printf("The code is %d%d%d\n", sum_response, subtraction_response, multiplication_response);    
    return 0;
}
