#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int a, b;

	printf("Enter a: ");
	scanf("%i", &a);

	printf("Enter b: ");
	scanf("%i", &b);

	printf("%i + %i = %i.\n", a, b, add(a, b));
}
