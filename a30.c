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

void mulmat(int *a, int *b,
	    int row_a, int col_a,
	    int row_b, int col_b,
	    int *dst)
{
	if (!a || !b || !row_a || !col_a || !row_b || !col_b || !dst)
		return;

	for (int i = 0; i < row_a; ++i)
		for (int j = 0; j < col_b; ++j)
		{
			dst[i * col_b + j] = 0;
			for (int k = 0; k < row_b; ++k)
				dst[i * col_b + j] += a[i * col_a + k] * b[k * col_b + j];
		}
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
	int b[64U][64U];
	int dst[64U][64U];
	int row = 0, col = 0;

	printf("Enter row: ");
	scanf("%i", &row);

	printf("Enter column: ");
	scanf("%i", &col);

	getmat((int *) a, row, col);
	getmat((int *) b, row, col);
	mulmat((int *) a, (int *) b,
	       row, col, row, col, (int *) dst);

	printf("\nMatrix A:\n");
	printmat((int *) a, row, col);
	printf("\nMatrix B:\n");
	printmat((int *) b, row, col);
	printf("\nResultant matrix:\n");
	printmat((int *) dst, row, col);

	return 0;
}
