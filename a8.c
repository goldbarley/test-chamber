#include <math.h>
#include <stdio.h>

int main(void)
{
	double a, b;

	unsigned int choice;

	printf("Enter a: ");
	scanf("%lf", &a);

	printf("Enter b: ");
	scanf("%lf", &b);

	printf("Operations:\n");
	printf("\t1. Add\n");
	printf("\t2. Subtract\n");
	printf("\t3. Multiply\n");
	printf("\t4. Divide\n");
	printf("\t5. Power\n");
	printf("\t6. Exit\n");

	printf("\nChoose operation: ");
	scanf("%u", &choice);

	switch(choice)
	{
		case 1:
			printf("%lf + %lf = %lf\n", a, b, a + b);
			break;
		case 2:
			printf("%lf - %lf = %lf\n", a, b, a - b);
			break;
		case 3:
			printf("%lf * %lf = %lf\n", a, b, a * b);
			break;
		case 4:
			printf("%lf / %lf = %lf\n", a, b, a / b);
			break;
		case 5:
			printf("pow(%lf, %lf) = %lf", a, b, pow(a, b));
			break;
		case 6:
			break;
		default:
			printf("Invalid operation.\n");
			break;
	}

	return 0;
}
