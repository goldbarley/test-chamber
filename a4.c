#include <stdio.h>

int main(void)
{
	unsigned int n;

	printf("Enter number of numbers to be checked: ");
	scanf("%u", &n);

	int max = 0;

	int dump;

	for (unsigned int i = 0; i < n; ++i)
	{
		printf("Enter no. %u: ", i + 1);
		scanf("%i", &dump);

		if (!i)
			max = dump;

		if (dump > max)
			max = dump;
	}

	printf("The largest element is %i.\n", max);

	return 0;
}
