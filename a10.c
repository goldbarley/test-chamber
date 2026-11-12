#include <stdio.h>

int main(void)
{
	int n;

	do
	{
		printf("Enter a number: ");
		scanf("%i", &n);
	} while (n <= 0);

	unsigned int sum = 0;

	for (unsigned int i = 1; i <= n; ++i)
		sum += i;

	printf("Sum = %u\n", sum);

	return 0;
}
