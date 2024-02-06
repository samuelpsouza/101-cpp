#include <iostream>

void pp(const int & a)
{
	std::cout << &a << " " << sizeof(a) << " " << a << std::endl;
}

int main(int argc, char * argv[])
{
	int a = 10;
	int b = 25;

	pp(a);
	pp(b);

	// int arr[10];
	int   arr[10] = {};
	int * harr    = new int[10];

	for (size_t i=0; i<10; i++)
	{
		pp(arr[i]);
	}

	for (size_t i=0; i<10; i++)
	{
		pp(harr[i]);
	}

	return 0;
}

