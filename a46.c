#include <stdio.h>

struct employee
{
	char name[128];
	unsigned long int salary;
};

void getemployee(struct employee *e)
{
	if (!e)
		return;

	printf("Enter employee name: ");
	scanf("%[^\n]", e->name);
	fgetc(stdin);

	printf("Enter employee salary: ");
	scanf("%lu", &e->salary);
	fgetc(stdin);
}

int main(void)
{
	struct employee e[10] = {0};

	for (unsigned int i = 0; i < 10; ++i)
	{
		printf("\nEmployee %u:\n", i + 1);
		getemployee(e + i);
	}

	unsigned int ssal = 0;
	printf("\nEnter specified salary: ");
	scanf("%u", &ssal);

	printf("Employees with higher salary than %u are:\n", ssal);
	for (unsigned int i = 0; i < 10; ++i)
		if (e[i].salary > ssal)
			printf("%s\n", e[i].name);

	return 0;
}
