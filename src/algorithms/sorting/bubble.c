#include <stdio.h>
#include <stdbool.h>

const int MAX_SIZE = 8;


static bool compare(int a, int b)
{
    return a > b;
}

void buble(int size, int *a)
{
    for (int i = 0; i < size; i++)
    {
        int swap = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (compare(a[j] > a[j + 1]))
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swap += 1;
            }
        }

        if (swap == 0)
        {
            return;
        }
    }
}

void bubble_rec(int size, int *a)
{
    int swap = 0;
    for (int j = 0; j < size - 1; j++)
    {
        if (compare(a[j], a[j + 1]))
        {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;

            swap += 1;
        }
    }

    if (swap != 0)
    {
        bubble_rec(size - 1, a);
    }
}


int main(int argc, char const *argv[])
{
    int a[] = {25, 48, 37, 12, 57, 86, 33, 92};
    // buble(MAX_SIZE, a);
    bubble_rec(MAX_SIZE, a);
    //bubble_gen(MAX_SIZE, a);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}
