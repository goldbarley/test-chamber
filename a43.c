#include <stdio.h>

struct book
{
	char author[128];
	char title[128];
	int price;
};

int main(void)
{
	struct book b = {0};

	printf("Enter the name of the author: ");
	scanf("%[^\n]", b.author);
	fgetc(stdin);

	printf("Enter the name of the book: ");
	scanf("%[^\n]", b.title);
	fgetc(stdin);

	printf("Enter the price: ");
	scanf("%i", &b.price);
	if (b.price < 0)
	{
		fprintf(stderr, "Price cannot be negative.\n");
		return -1;
	}

	printf("\nBook details:\nTitle: %s\nAuthor: %s\nPrice: %i\n",
	       b.title, b.author, b.price);

	return 0;
}
