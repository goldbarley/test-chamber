#include <stdio.h>

int main(void)
{
	char filename[4096];

	printf("Enter filename: ");
	scanf("%[^\n]", filename);

	FILE *f = fopen(filename, "w");
	if (!f)
	{
		fprintf(stderr, "Could not open file.\n");
		return -1;
	}

	printf("Created file: %s.\n", filename);

	fclose(f);

	return 0;
}
