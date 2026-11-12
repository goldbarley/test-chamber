#include <stdio.h>

#define SQUARE(x) ((long long int)((x) * (x)))

int main(void)
{
	long int a = 0;

	printf("Enter a number: ");
	scanf("%li", &a);

	printf("\n%li * %li = %lli\n", a, a, SQUARE(a));

	return 0;
}
