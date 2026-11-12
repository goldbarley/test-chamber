#include <stdio.h>

union vec1
{
	int a;
	int x;
};

int main(void)
{
	printf("Size of union vec1: %lu bytes.\n", sizeof(union vec1));

	return 0;
}
