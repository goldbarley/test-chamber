#include <stdio.h>

int main(void)
{
	/* Assignment operations. */
	float a = 3.14;
	float b = 2.71;
	int c = 70;
	int d = 100;
	c += d;
	c -= d;
	d *= c;
	d /= c;
	c ^= d;
	d &= d;
	d |= c;
	d %= c;
	printf("a: %f, b: %f, c: %i, d: %i\n", a, b, c, d);

	/* Arithmetic operations. */
	float add = a + b;
	float sub = a - b;
	float mul = a * b;
	float div = a / b;

	printf("add: %f\nsub: %f\nmul: %f\ndiv: %f\n",
	       add, sub, mul, div);

	/* Relational operators. */
	int alb = a < b;
	int agb = a > b;
	int aleb = a <= b;
	int ageb = a >= b;
	int aeb = a == b;
	int aneb = a != b;

	printf("a < b: %i\n", alb);
	printf("a > b: %i\n", agb);
	printf("a <= b: %i\n", aleb);
	printf("a >= b: %i\n", ageb);
	printf("a == b: %i\n", aeb);
	printf("a != b: %i\n", aneb);

	/* Logical operators. */
	int aaab = a && b;
	int aoob = a || b;
	int nc = !c;

	printf("a && b: %i\n", aaab);
	printf("a || b: %i\n", aoob);
	printf("!c: %i\n", nc);

	/* Increment and decrement operators. */
	++c, c++;
	printf("++c, c++ = %i\n", c);
	--c, c--;
	printf("--c, c-- = %i\n", c);

	/* Conditional (ternary) operator. */
	char tern = (a + b) == 5.85F ? 'y' : 'n';
	printf("(a + b) == 5.85F: %c\n", tern);

	/* Operator precedence and associativity. */
	float opa = a * b / c - a / c * b + 1;
	printf("a * b / c - a / c * b + 1 = %f\n", opa);

	/* Implicit and explicit type casting. */
	int ia = a;
	double db = (double) b;

	printf("int a: %i\n", ia);
	printf("double b: %lf\n", db);

	return 0;
}
