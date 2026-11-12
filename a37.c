#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 2;

	int *a = malloc(n * sizeof(int));
	if (!a)
	{
		fprintf(stderr, "Out of memory.\n");
		return -1;
	}

	a[0] = 1;
	a[1] = 2;

	printf("\nSize of int: %zu\n", sizeof(int));
	printf("At %lu: %i\n", (uintptr_t) a, *a);
	int *da = a + 1;
	uintptr_t diff = ((uintptr_t) da - (uintptr_t) a);
	printf("Increment.\nAddress: %lu\n", (uintptr_t) ++a);
	// printf("Element at address %lu: %i\n", (uintptr_t) da, *da);
	printf("Decrement.\nAddress: %lu\n", (uintptr_t) --a);
	// printf("Element at address %lu: %i\n", (uintptr_t) a, *a);
	printf("Diff: %lu\n", diff);

	if (diff == sizeof(int))
	{
		free(a);
		printf("Size of 'int' is equal to the difference.\n");
		return 0;
	}

	printf("Size of int is not equal to the difference.\n");

	free(a);

	return 1;
}
