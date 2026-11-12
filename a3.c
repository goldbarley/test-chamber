#include <stdio.h>

int main(void)
{
	int a = 4;
	int b = 6;

	printf("a: %i, b: %i\n", a, b);

	int bw_and = a & b;
	printf("a & b = %i\n", bw_and);

	int bw_or = a | b;
	printf("a | b = %i\n", bw_or);

	int bw_xor = a ^ b;
	printf("a ^ b = %i\n", bw_xor);

	long int onecmpl_a = ~a;
	printf("One's complement of %i = %li.\n", a, onecmpl_a);

	int s1_exp_2_4 = 1 << 4;
	printf("pow(2, 4) = %i\n", s1_exp_2_4);

	int s512_exp_2_8 = 512 >> 8;
	printf("512 / pow(2, 8) = %i\n", s512_exp_2_8);

	return 0;
}
