#include <stdio.h>

int gcd(int a, int b)
{
	if (b == 0)
		return a;

	return gcd(b, a % b);
}

int main(void)
{
	int a, b;
	int x, y;

	do
	{
		printf("Enter a: ");
		scanf("%i", &a);
	} while (a <= 0);

	do
	{
		printf("Enter b: ");
		scanf("%i", &b);
	} while (b <= 0);

	if (a < b)
	{
		x = b;
		y = a;
	}
	else
	{
		x = a;
		y = b;
	}

	printf("gcd(%i, %i) = %i.\n", a, b, gcd(x, y));

	return 0;
}
