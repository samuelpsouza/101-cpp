#include <stdio.h>
#include "vector.c"

int main(int argc, char const *argv[])
{
    IntVector* int_vector = new(2);

    printf("The size of this array is %d\n", size(int_vector));
    printf("The capacity of this array is %d\n", capacity(int_vector));

    return 0;
}
