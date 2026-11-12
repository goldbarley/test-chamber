#include <stdio.h>

int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return n * fact(n - 1);
}

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%i", &n);
	if (n < 0)
	{
		printf("Invalid input.\n");
		return -1;
	}

	printf("%i! = %i.\n", n, fact(n));
}
