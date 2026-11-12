#include <stdio.h>

int findmin(int *a, int n)
{
	if (!a || !n)
		return 0;

	int min = *a;
	for (int i = 1; i < n; ++i)
	{
		if (min > a[i])
			min = a[i];
	}

	return min;
}

int findmax(int *a, int n)
{
	if (!a || !n)
		return 0;

	int max = *a;
	for (int i = 1; i < n; ++i)
	{
		if (max < a[i])
			max = a[i];
	}

	return max;
}

int main(void)
{
	int n = 64U;
	int a[64U];

	int min = 0;
	int max = 0;

	printf("How many elements? ");
	scanf("%i", &n);
	if (n > 64U)
	{
		fprintf(stderr, "No. of elements cannot be greater than 64.\n");
		return -1;
	}

	int i = 0;
	for (; i < n; ++i)
	{
		printf("Enter element at (%i): ", i);
		scanf("%i", a + i);
	}

	printf("\nSmallest element: %i.\nLargest element: %i.\n",
	       findmin(a, i), findmax(a, i));

	return 0;
}
