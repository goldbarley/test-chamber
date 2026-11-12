#include <stdio.h>

struct vec2
{
	int x;
	int y;
};

struct vec2 addvec2(struct vec2 a, struct vec2 b)
{
	return (struct vec2) {a.x + b.x, a.y + b.y};
}

struct vec2 getvec2(struct vec2 *v)
{
	printf("Enter x: ");
	scanf("%i", &v->x);

	printf("Enter y: ");
	scanf("%i", &v->y);

	return *v;
}

int main(void)
{
	struct vec2 a = {0};
	struct vec2 b = {0};

	printf("Enter vector A:\n");
	getvec2(&a);
	printf("\nEnter vector B:\n");
	getvec2(&b);

	struct vec2 c = addvec2(a, b);

	printf("\n(%i, %i) + (%i, %i) = (%i, %i)\n",
	       a.x, a.y, b.x, b.y, c.x, c.y);

	return 0;
}
