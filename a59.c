#include <stdio.h>

#define AREA_RECTANGLE(a, b) ((long long int)((a) * (b)))

int main(void)
{
	long int a = 0;
	long int b = 0;

	printf("Enter length: ");
	scanf("%li", &a);
	if (a <= 0)
	{
		fprintf(stderr, "Length cannot be 0 or negative.\n");
		return -1;
	}

	printf("Enter breadth: ");
	scanf("%li", &b);
	if (b <= 0)
	{
		fprintf(stderr, "Breadth cannot be 0 or negative.\n");
		return -1;
	}

	printf("\nArea of the rectangle is: %lli sq. units.\n", AREA_RECTANGLE(a, b));

	return 0;
}
