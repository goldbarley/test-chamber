#include <math.h>
#include <stdio.h>

int main(void)
{
	int n;

	do
	{
		printf("Enter a number (<= 20,000): ");
		scanf("%i", &n);
	} while (n > 20000LL);

	printf("Armstrong numbers: \n");

	for (unsigned int i = 0U; i < n; ++i)
	{
		unsigned short int ndig = (unsigned int) log10f((float) i) + 1;
		unsigned int t = i;
		unsigned int sum = 0;

		while (t)
		{
			sum += (unsigned int) powf((float)(t % 10),
							     (float) ndig);
			t /= 10;
		}

		if (sum == i)
			printf("%u ", i);
	}
	printf("\n");

	return 0;
}
