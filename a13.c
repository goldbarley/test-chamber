#include <stdio.h>

int main(void)
{
	int n;
	unsigned int c = 0;
	unsigned long long int a = 0, s = 1;

	do
	{
		printf("Enter a number (>= 2): ");
		scanf("%i", &n);
	} while (n < 2);

	printf("\n0 1 ");

	while (c < n)
	{
		s += a;
		a = s - a;
		printf("%llu ", s);
		++c;
	}

	printf("\n");

	return 0;
}
