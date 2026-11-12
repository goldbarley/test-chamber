#include <stdio.h>

int main(void)
{
	unsigned int num;
	int n;

	printf("Enter a number: ");
	scanf("%u", &num);

	do
	{
		printf("Enter a range: ");
		scanf("%i", &n);
	} while (n <= 0);

	for (unsigned int i = 1; i <= n; ++i)
		printf("%u x %u = %llu\n",
		       num, i, (unsigned long long int)(num * i));

	return 0;
}
