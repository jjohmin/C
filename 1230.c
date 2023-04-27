#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > 170) {
		if (b > 170) {
			if (c > 170)
				printf("PASS");
			else
				printf("CRASH %d", c);
		}
		else
			printf("CRASH %d", b);
	}
	else
		printf("CRASH %d", a);
	return 0;
}