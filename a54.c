#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char filename[4096];

	printf("Enter filename: ");
	scanf("%[^\n]", filename);

	FILE *f = fopen(filename, "r");
	if (!f)
	{
		fprintf(stderr, "Could not open file.\n");
		return -1;
	}

	int c;
	while((c = fgetc(f)) != EOF)
	{
		if (isupper(c))
			printf("%c is an uppercase alphabet.\n", c);
		else if (islower(c))
			printf("%c is a lowercase alphabet.\n", c);
		else if (isdigit(c))
			printf("%c is a digit.\n", c);
		else
			printf("%c is a special character.\n", c);
	}

	fclose(f);

	return 0;
}
