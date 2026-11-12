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
		printf("%i, ", a[i]);
	printf("%i}\n", a[n - 1]);
}

void bubblesort(int *a, int n, int *dst,
		char asc)
{
	if (!a || !n || !dst)
		return;

	for (int i = 0; i < n; ++i)
		dst[i] = a[i];

	for (int i = 0; i < n - 1; ++i)
	{
		char swapped = 0;
		for (int j = 0; j < n - i - 1; ++j)
		{
			int dj = j + 1;
			if (dst[j] > dst[dj])
			{
				int tmp = dst[j];
				dst[j] = dst[dj];
				dst[dj] = tmp;
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}

int main(void)
{
	int n = 64U;
	int a[64U];
	int sa[64U];

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

	printf("\nOriginal array:\n");
	printarr(a, n);

	bubblesort(a, n, sa, 1);

	printf("\nSorted array: \n");
	printarr(sa, n);
}
