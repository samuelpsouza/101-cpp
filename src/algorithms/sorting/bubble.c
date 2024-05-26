#include <stdio.h>

const int SIZE = 8;

int main(int argc, char const *argv[])
{
    int a[] = {25,48,37,12,57,86,33,92};

    for (int i = 0; i < SIZE; i++)
    {
        int swap = 0;
        for (int j = 0; j < SIZE - 1; j++)
        {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                swap+=1;
            }
        }

        if(swap == 0) {
            break;
        }
        
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    
    return 0;
}
