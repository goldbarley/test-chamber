#include <stdio.h>


/*
 * This program prints "Hello, world!" and displays the values
 * and size of each datatype in C.
 */
int main(void)
{
	printf("Hello, World!\n\n");

	const char c = 'A';
	const short int s = 123;
	const int i = 1234;
	const long int li = 12345L;
	const long long int lli = 123456LL;
	const float f = 3.14F;
	const double d = 3.14159;
	const long double ld = 3.14159265;

	// The values are printed as "type: value, size (in bytes)."
	printf("type: value, size (in bytes)\n");
	printf("char: %c, %lu\n", c, sizeof(char));
	printf("short int: %i, %lu\n", s, sizeof(short int));
	printf("int: %i, %lu\n", i, sizeof(int));
	printf("long int: %li, %lu\n", li, sizeof(long int));
	printf("long long int: %lli, %lu\n", lli,
	       sizeof(long long int));
	printf("float: %f, %lu\n", f, sizeof(float));
	printf("double: %lf, %lu\n", d, sizeof(double));
	printf("long double: %Lf, %lu\n", ld, sizeof(long double));

	return 0;
}
