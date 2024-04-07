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

void run_pointers()
{
    printf("################# Double Pointers #################\n\n\n");

    int a = 2, b = 2;

    int sum_response = operator(a, b, &sum);
    int subtraction_response = operator(a, b, &subtraction);
    int multiplication_response = operator(a, b, &multiplication);

    printf("The code is %d%d%d\n\n\n", sum_response, subtraction_response, multiplication_response);

    printf("################# Multi-Level Pointers #################\n\n\n");

    int value = 10;
    int *ptr_level_one;
    int **ptr_level_two;
    int ***ptr_level_three;

    ptr_level_one = &value;
    ptr_level_two = &ptr_level_one;
    ptr_level_three = &ptr_level_two;

    printf("The value is %d", ***ptr_level_three);
}
