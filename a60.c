#include <stdio.h>

#define MULTIPLY(a, b) ((long long int)((a) * (b)))

int main(void)
{
	long int a = 0;
	long int b = 0;

	printf("Enter a number: ");
	scanf("%li", &a);

	printf("Enter another number: ");
	scanf("%li", &b);

	printf("\n%li * %li = %lli\n", a, b, MULTIPLY(a, b));

	return 0;
}
