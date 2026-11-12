#include <stdio.h>

int main(void)
{
	int n =  64U;
	int a[64U];

	int i = 0;
	int sum = 0;

	printf("How many elements? ");
	scanf("%u", &n);
	if (n > 64U)
	{
		fprintf(stderr, "No. of elements cannot be greater than 64.\n");
		return -1;
	}

	for (; i < n; ++i)
	{
		printf("Enter element at (%i): ", i);
		scanf("%i", a + i);

		sum += a[i];
	}

	double avg = i ? (long double) sum / i : 0.0;

	printf("\nSum of the elements is: %i.\n", sum);
	printf("Average of the elements is: %lf.\n", avg);

	return 0;
}
