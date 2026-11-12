#include <stdio.h>

int getmat(int *a, int row, int col)
{
	if (!a || !row || !col)
		return -1;

	printf("\nInput matrix:\n");
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("Enter element at (%u, %u): ", i, j);
			scanf("%lli", a + i * col + j);
		}
	}

	return 0;
}

int findmax(int *a, int row, int col)
{
	if (!a || !row || !col)
		return 0;

	int max = *a;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			if (max < a[i * col + j])
				max = a[i * col + j];

	return max;
}

void printmat(int *a, int row, int col)
{
	if (!a || !row || !col)
		return;

	for (int i = 0; i < row; ++i)
	{
		printf("[");
		for (int j = 0; j < col - 1; ++j)
			printf("%lli, ", a[i * col + j]);
		printf("%lli]\n", a[col * (i + 1) - 1]);
	}
}

int main(void)
{
	int a[64U][64U];
	int row = 0;
	int col = 0;

	printf("Enter no. of rows: ");
	scanf("%u", &row);
	if (row > 64U)
	{
		fprintf(stderr, "Row count cannot be greater than 64.\n");
		return -1;
	}

	printf("Enter no. of columns: ");
	scanf("%u", &col);
	if (col > 64U)
	{
		fprintf(stderr, "Column count cannot be greater than 64.\n");
		return -1;
	}

	getmat((int *) a, row, col);

	printf("\nMatrix:\n");
	printmat((int *) a, row, col);
	printf("\nLargest element: %lli.\n", findmax((int *) a, row, col));

	return 0;
}
