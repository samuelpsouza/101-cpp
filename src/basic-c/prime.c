#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number)
{
	int divisor = 2;

	while(divisor < number)
	{
		if(number % divisor == 0)
		{
			return false;
		}

		divisor++;
	}

	return true;
}

int main(void)
{
	int number = 11;
	printf("Is %d prime? %d\n", number, is_prime(number));

	return 0;
}
