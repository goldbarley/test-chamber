#include <stdio.h>

int fibterm(int n)
{
	if (n == 1)
		return 0;

	if (n == 2)
		return 1;

	return fibterm(n - 1) + fibterm(n - 2);
}

int main(void)
{
	int n;

	printf("Enter a number (>= 2): ");
	scanf("%i", &n);

	for (int i = 1; i <= n; ++i)
		printf("%i ", fibterm(i));

	printf("\n");

	return 0;
}
