#include <stdio.h>
#include <stdlib.h>

void printarr(long long int *a, unsigned int n)
{
	if (!a || !n)
	{
		printf("{}\n");
		return;
	}


	printf("{");
	for (unsigned int i = 0; i < n - 1; ++i)
		printf("%lli, ", *(a + i));
	printf("%lli}\n", *(a + n - 1));
}

int main(void)
{
	unsigned int n = 0;

	printf("How many elements? ");
	scanf("%u", &n);

	long long int *a = malloc(n * sizeof(long long int));
	if (!a)
	{
		fprintf(stderr, "Out of memory.\n");
		return -1;
	}

	for (unsigned int i = 0; i < n; ++i)
	{
		printf("Enter element at (%u): ", i);
		scanf("%lli", a + i);
	}

	printf("Elements of the array are:\n");
	printarr(a, n);

	free(a);

	return 0;
}
