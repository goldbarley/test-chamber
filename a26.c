#include <stdio.h>

long int linsearch(int elem, int *a, int n)
{
	if (!a || !n)
		return -1;

	int i = 0;
	for (; i < n; ++i)
	{
		if (elem == a[i])
			return i;
	}

	return -1;
}

int main(void)
{
	int n = 64U;
	int a[64U];

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

	int elem = 0;
	printf("\nEnter element to find: ");
	scanf("%i", &elem);

	long int elemi = linsearch(elem, a, n);

	if (elemi >= 0)
	{
		printf("\nElement %lli found at index %li.\n", elem, elemi);
		return 0;
	}

	printf("\nElement %lli not found.\n", elem);
	return 1;
}
