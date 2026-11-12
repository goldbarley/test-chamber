#include <stdio.h>

struct employee
{
	struct personal
	{
		char name[128];
		unsigned int id;
	} personal;
	struct location
	{
		char address[512];
		char city[64];
		unsigned int pin;
	} location;
};

int main(void)
{
	struct employee e = {0};

	printf("Enter emplyee name: ");
	scanf("%[^\n]", e.personal.name);
	fgetc(stdin);

	printf("Enter employee ID: ");
	scanf("%u", &e.personal.id);
	fgetc(stdin);

	printf("Enter employee address: ");
	scanf("%[^\n]", e.location.address);
	fgetc(stdin);

	printf("Enter employee's resident city: ");
	scanf("%[^\n]", e.location.city);
	fgetc(stdin);

	printf("Enter employee's pin code: ");
	scanf("%u", &e.location.pin);
	fgetc(stdin);

	printf("\nEmployee details:\nName: %s\nID: %u\nAddress: %s\n"
	       "City: %s\nPin: %u\n",
		e.personal.name, e.personal.id, e.location.address,
		e.location.city, e.location.pin);

	return 0;
}
