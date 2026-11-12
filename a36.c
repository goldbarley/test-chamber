#include <stdio.h>
#include <stdlib.h>

void printarr(int *a, int n)
{
	if (!a || !n)
	{
		printf("{}\n");
		return;
	}


	printf("{");
	for (int i = 0; i < n - 1; ++i)
		printf("%lli, ", *(a + i));
	printf("%lli}\n", *(a + n - 1));
}

int main(void)
{
	int n = 0;

	printf("How many elements? ");
	scanf("%u", &n);

	int *a = calloc(n, sizeof(int));
	if (!a)
	{
		fprintf(stderr, "Out of memory.\n");
		return -1;
	}

	int i = 0;
	for (; i < n; ++i)
	{
		printf("Enter element at (%u): ", i);
		scanf("%i", a + i);
	}

	printf("\nYour array:\n");
	printarr(a, n);

	free(a);

	return 0;
}
