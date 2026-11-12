#include <stdio.h>

struct planet
{
	double mass;
	double radius;
};

void printpl(struct planet *p)
{
	if (!p)
		return;

	printf("Mass: %.3E\n", p->mass);
	printf("Radius: %.3E\n", p->radius);
}

void editpl(struct planet *p)
{
	if (!p)
		return;

	(*p).mass = 6.972E+24;
	(*p).radius = 7.371E+6;
}

int main(void)
{
	struct planet earth = {
		.mass = 5.972E+24,
		.radius = 6.371E+6
	};

	printf("Earth's details (before):\n");
	printpl(&earth);

	editpl(&earth);

	printf("\nEarth's details (after edits):\n");
	printpl(&earth);

	return 0;
}
