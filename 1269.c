#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a, b, c, d, num = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (d == 1) {
		printf("%d", a);
		return 0;
	}
	else {
		num = a * b + c;
		for (int i = 3; i <= d; i++)
			num = num * b + c;
	}
	printf("%d", num);
	return 0;
}