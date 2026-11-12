#include <stdio.h>

int main(void)
{
	int n;

	do
	{
		printf("Enter a number: ");
		scanf("%i", &n);
	} while (n < 0);

	if (n == 0 || n == 1)
	{
		printf("%i is not prime.\n", n);
		return 1;
	}
	else if (n % 2 == 0)
	{
		printf("%i is not prime.\n", n);
		return 1;
	}
	else if (n == 2)
	{
		printf("2 is prime.\n");
		return 0;
	}

	for (unsigned int i = 3; i * i < n; i += 2)
		if (n % i == 0)
		{
			printf("%i is not prime.\n", n);
			return 1;
		}

	printf("%i is prime.\n", n);

	return 0;
}
