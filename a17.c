#include <stdio.h>

void printstr(const char *s)
{
	printf("%s", s);
}

int main(void)
{
	const char *s = "Print this string.\n";

	printstr(s);

	return 0;
}
