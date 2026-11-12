#include <stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int (*fp_max)(int, int) = max;

	int a = 0;
	int b = 0;

	printf("Enter a number: ");
	scanf("%i", &a);

	printf("Enter another number: ");
	scanf("%i", &b);

	printf("\nmax(%i, %i) = %i\n", a, b, fp_max(a, b));
}
