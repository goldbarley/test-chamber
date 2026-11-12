#include <stdio.h>

int main(void)
{
	float phys, chem, math, cs;

	printf("Enter grade in Physics: ");
	scanf("%f", &phys);

	printf("Enter grade in Chemistry: ");
	scanf("%f", &chem);

	printf("Enter grade in Mathematics: ");
	scanf("%f", &math);

	printf("Enter grade in Computer Science: ");
	scanf("%f", &cs);

	float avg = (phys + chem + math + cs) / 4;

	printf("Total percentage in all subjects is: %.2f%%.\n", avg);

	return 0;
}
