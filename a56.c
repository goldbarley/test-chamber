#include <stdio.h>

#define LENGTH (64U)
#define BREADTH (32U)

int main(void)
{
	printf("Length: %u units\n", LENGTH);
	printf("Breadth: %u units\n", BREADTH);
	printf("Area: %lu sq. units\n", (unsigned long int) LENGTH * BREADTH);
}
