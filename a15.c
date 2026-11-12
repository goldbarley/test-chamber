#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%i", &n);

	int absn = n < 0 ? -n : n;

	int t = absn, rev = 0;

	while (t)
	{
		rev = 10 * rev + (t % 10);
		t /= 10;
	}

	if (rev == absn)
		printf("%i is palindrome.\n", n);
	else
		printf("%i is not palindrome.\n", n);
}
