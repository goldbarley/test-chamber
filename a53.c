#include <stdio.h>

int main(void)
{
	char filename[4096U];

	printf("Enter filename: ");
	scanf("%[^\n]", filename);

	FILE *f = fopen(filename, "r");
	if (!f)
	{
		printf("File %s does not exist.\n", filename);
		return 1;
	}

	printf("File %s exists.\n", filename);

	fclose(f);

	return 0;
}
