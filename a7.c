#include <stdio.h>

int main(void)
{
	long long int n;

	printf("Enter a number: ");
	scanf("%lli", &n);

	if (n % 2)
		printf("%lli is odd.\n", n);
	else
		printf("%lli is even.\n", n);

	return 0;
}
