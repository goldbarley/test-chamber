#include <stdio.h>

int main(void)
{
	unsigned long long year;

	printf("Enter a year: ");
	scanf("%llu", &year);

	unsigned int leap = !(year % 4) && (!(year % 400) || year % 100);

	if (leap)
		printf("%llu is a leap year.\n", year);
	else
		printf("%llu is not a leap year.\n", year);

	return 0;
}
