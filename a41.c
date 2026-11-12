#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcon(const char *s, const char *t, char *dst, unsigned int n)
{
	if (!s || !t || !dst || !n)
		return;

	unsigned int dsti = 0;
	for (unsigned int i = 0, m = strlen(s); i < m; ++i, ++dsti)
		*(dst + dsti) = *(s + i);

	for (unsigned int i = 0, m = strlen(t); i < m; ++i, ++dsti)
		*(dst + dsti) = *(t + i);
}

int strlex(const char *s, const char *t)
{
	if (!s || !t)
		return -1;

	int flag = 0;
	for (unsigned int i = 0, j = 0; s[i] && t[j]; ++i, ++j)
	{
		if (s[i] > t[j])
			flag = 1;
		else if (s[i] < t[j])
			flag = 2;
	}

	return flag;
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

	char *t = malloc(n * sizeof(char));
	if (!t)
	{
		fprintf(stderr, "Out of memory.\n");
		return -1;
	}

	printf("Enter a string: ");
	scanf("%[^\n]", s);
	fgetc(stdin);

	printf("\nEnter another string: ");
	scanf("%[^\n]", t);

	unsigned long int bytes = strlen(s) + strlen(t) + 1;
	char *dst = malloc(bytes * sizeof(char));
	if (!dst)
	{
		fprintf(stderr, "Out of memory.\n");
		return -1;
	}

	strcon(s, t, dst, bytes);

	printf("\nConcatenated string: %s\n", dst);

	int r = strlex(s, t);
	if (r < 0)
		return -1;

	if (r == 1)
		printf("%s ranks higher than %s\n", s, t);
	else if (r == 2)
		printf("%s ranks higher than %s\n", t, s);
	else if (r == 0)
		printf("%s and %s are equal\n", s, t);

	free(s);
	free(t);
	free(dst);

	return 1;
}
