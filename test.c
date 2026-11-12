#include <stdio.h>

int main(void)
{
	FILE *f = fopen("ASCII.txt", "w");
	if (!f)
		return -1;

	fprintf(f, "N\tC\n");
	for (int c = 0; c <= 127; ++c)
	{
		fprintf(f, "%i\t%c\n", c, c);
		fprintf(stdout, "%i\t%c\n", c, c);
	}

	fclose(f);

	return 0;
}
