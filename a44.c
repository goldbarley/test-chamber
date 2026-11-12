#include <stdio.h>

struct student
{
	char name[128];
	int grade;
};

void getstudent(struct student *s)
{
	if (!s)
		return;

	printf("Enter name: ");
	scanf("%[^\n]", s->name);
	fgetc(stdin);

	printf("Enter marks: ");
	scanf("%i", &s->grade);
	fgetc(stdin);
}

int main(void)
{
	struct student a = {0};
	struct student b = {0};

	printf("Student A:\n");
	getstudent(&a);
	printf("\nStudent B:\n");
	getstudent(&b);

	if (a.grade > b.grade)
		printf("%s got higher marks than %s.\n", a.name, b.name);
	else if (a.grade < b.grade)
		printf("%s got higher marks than %s.\n", b.name, a.name);
	else
		printf("%s and %s got equal marks.\n", a.name, b.name);

	return 0;
}
