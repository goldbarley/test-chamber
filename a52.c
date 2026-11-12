#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[4096];

	printf("Enter filename: ");
	scanf("%[^\n]", filename);

	FILE *wr = fopen(filename, "w");
	if (!wr)
	{
		fprintf(stderr, "Could not open file in write mode.\n");
		return -1;
	}

	fprintf(wr, "Hello\n");
	fclose(wr);
	printf("\nWritten file: %s\n", filename);

	FILE *ap = fopen(filename, "a");
	if (!ap)
	{
		fprintf(stderr, "Could not open file in append mode.\n");
		return -1;
	}

	fprintf(ap, "World");
	fclose(ap);
	printf("Appended to file: %s\n", filename);

	FILE *rd = fopen(filename, "r");
	if (!rd)
	{
		fprintf(stderr, "Could not open file in read mode.\n");
		return -1;
	}

	char buffer[1024];
	fgets(buffer, sizeof(buffer), rd);
	fgets(buffer + strlen(buffer), sizeof(buffer), rd);
	fclose(rd);

	printf("\nFile content:\n%s\n", buffer);

	return 0;
}
