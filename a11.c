#include <stdio.h>

int main(void)
{
	int n;

	do
	{
		printf("Enter a number: ");
		scanf("%i", &n);
	} while (n < 0);

	unsigned long long int fact = 1;

	for (unsigned int i = 1; i <= n; ++i)
		fact *= i;

	printf("%i! = %llu.\n", n, fact);

	return 0;
}
