#include <stdlib.h>
#include <stdio.h>

int sum(int a, int b);

int main(int argc, char* argv[])
{
	int a = 3;
	int b = 4;
	int result;

	printf("Hello world\n");

	result = sum(a, b);

	printf("Sum: %d\n", result);

	return EXIT_SUCCESS;
}

int sum(int a, int b)
{
	int sum = a + b;
	return sum;
}