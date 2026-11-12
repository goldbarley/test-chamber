#include <stdio.h>

enum days
{
	MONDAY = 1,
	TUESDAY = 2,
	WEDNESDAY = 3,
	THURSDAY = 4,
	FRIDAY = 5,
	SATURDAY = 6,
	SUNDAY = 7
};

int main(void)
{
	unsigned int n = 0;

	printf("Enter a day number: ");
	scanf("%u", &n);
	if (!n || n > 7)
	{
		fprintf(stderr, "Invalid day number.\n");
		return -1;
	}

	switch (n)
	{
		case MONDAY:
			printf("The day is Monday.\n");
			break;
		case TUESDAY:
			printf("The day is Tuesday.\n");
			break;
		case WEDNESDAY:
			printf("The day is Wednesday.\n");
			break;
		case THURSDAY:
			printf("The day is Thursday.\n");
			break;
		case FRIDAY:
			printf("The day is Friday.\n");
			break;
		case SATURDAY:
			printf("The day is Saturday.\n");
			break;
		case SUNDAY:
			printf("The day is Sunday.\n");
			break;
	}

	return 0;
}
