#include <stdio.h>

void printarr(int *a, int n)
{
	if (!a || !n)
	{
		printf("{}\n");
		return;
	}


	printf("{");
	for (int i = 0; i < n - 1; ++i)
		printf("%i, ", *(a + i));
	printf("%i}\n", *(a + n - 1));
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
		scanf("%lli", a + i);
	}

	printf("\nYour array:\n");
	printarr(a, n);
}
