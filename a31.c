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
			scanf("%i", a + i * col + j);
		}
	}

	return 0;
}

void transpose(int *a,
	       int row, int col,
	       int *dst)
{
	if (!a || !row || !col || !dst)
		return;

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			dst[j * row + i] = a[i * col + j];
}

void printmat(int *a, int row, int col)
{
	if (!a || !row || !col)
		return;

	for (int i = 0; i < row; ++i)
	{
		printf("[");
		for (int j = 0; j < col - 1; ++j)
			printf("%i, ", a[i * col + j]);
		printf("%i]\n", a[col * (i + 1) - 1]);
	}
}

int main(void)
{
	int a[64U][64U];
	int dst[64U][64U];
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
	transpose((int *) a, row, col, (int *) dst);

	printf("\nOriginal matrix:\n");
	printmat((int *) a, row, col);
	printf("\nTransposed matrix:\n");
	printmat((int *) dst, col, row);

	return 0;
}
