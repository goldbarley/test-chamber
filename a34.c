#include <stdio.h>

int arrsum(int *a, int n)
{
	int sum = 0;

	for (int i = 0; i < n; ++i)
		sum += *(a + i);

	return sum;
}

int main(void)
{
	int n = 64U;
	int a[64U];

	printf("How many elements? ");
	scanf("%u", &n);
	if (n > 64U)
	{
		fprintf(stderr, "No. of elements cannot be greater than 64.\n");
		return -1;
	}

	int i = 0;
	for (; i < n; ++i)
	{
		printf("Enter element at (%u): ", i);
		scanf("%i", a + i);
	}

	printf("\nSum of all elements: %i.\n", arrsum(a, n));

	return 0;
}
