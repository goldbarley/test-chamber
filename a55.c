#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char srcname[4096];
	char dstname[4096];

	printf("Enter source filename: ");
	scanf("%[^\n]", srcname);
	fgetc(stdin);

	FILE *srcf = fopen(srcname, "r");
	if (!srcf)
	{
		fprintf(stderr, "Could not open file: %s.\n", srcname);
		return -1;
	}

	printf("Enter destination filename: ");
	scanf("%[^\n]", dstname);

	FILE *dstf = fopen(dstname, "w");
	if (!dstf)
	{
		fprintf(stderr, "Could not open file: %s.\n", dstname);
		return -1;
	}

	int c;
	while((c = fgetc(srcf)) != EOF)
		if (isalpha(c))
			fputc(c, dstf);

	fclose(srcf);
	fclose(dstf);
}
