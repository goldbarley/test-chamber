#include <stdio.h>

int getint(void)
{
	int n;

	printf("Enter an integer: ");
	scanf("%i", &n);

	return n;
}

int main(void)
{
	int n = getint();

	printf("Your integer is: %i\n", n);

	return 0;
}
