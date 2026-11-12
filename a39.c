#include <stdio.h>
#include <stdlib.h>

unsigned long int strlength(const char *s)
{
	if (!s)
		return 0;

	unsigned long int len = 0;
	for (; *(s + len); ++len);

	return len;
}

int main(void)
{
	unsigned long int n = 1024;
	char *s = malloc(n * sizeof(char));
	if (!s)
	{
		fprintf(stderr, "Allocation failed.\n");
		return -1;
	}

	printf("Enter a string: ");
	scanf("%[^\n]", s);

	printf("Length of your string is: %lu.\n", strlength(s));

	free(s);

	return 0;
}
