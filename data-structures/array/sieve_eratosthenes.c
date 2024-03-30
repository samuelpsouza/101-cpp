#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(int argc, char *argv[])
{

  int n = 16;
  bool primes[n + 1];
  
  for(int i = 2; i <= n; i++)
  {
    primes[i] = true;
  }

  for (int divisor = 2;divisor * divisor <= n;divisor++) 
  {
    if (primes[divisor]) 
    {
      for (int i = 2 * divisor;i <= n; i = i + divisor) 
      {
        primes[i] = false;
	printf("Excluding %d\n", i);
      }
    }
  }

  for (int i = 2; i <= n; i++) 
  {
    if(primes[i])
    {
      printf(" %d", i);
    }
  }

  printf("\n");

  return EXIT_SUCCESS;
}
