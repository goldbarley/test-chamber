#include <stdio.h>

int sum(unsigned int n)
{
	if (n == 1)
		return 1;

	return n + sum(n  - 1);
}

int main(void)
{
	int n = 0;

	do
	{
		printf("Enter a number (> 0): ");
		scanf("%i", &n);
	} while (n <= 0);

	printf("Sum: %i.\n", sum(n));

	return 0;
}
