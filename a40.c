#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcopy(const char *s, char *d)
{
	if (!s || !d)
		return;

	unsigned int i = 0;
	for (; *(s + i); ++i)
		*(d + i) = *(s + i);

	*(d + i) = 0;
}

int main(void)
{
	unsigned int n = 1024;
	char *s = malloc(n * sizeof(char));
	if (!s)
	{
		fprintf(stderr, "Out of memory.\n");
		return -1;
	}

	printf("Enter a string: ");
	scanf("%[^\n]", s);

	unsigned int lens = strlen(s) + 1;
	char *ds = malloc(lens * sizeof(char));
	if (!ds)
	{
		fprintf(stderr, "Out of memory.\n");
		return -1;
	}

	strcopy(s, ds);

	printf("Original string: %s\nCopied string: %s\n", s, ds);

	free(s);
	free(ds);

	return 0;
}
