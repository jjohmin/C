#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int n, c = 0, n3;
	scanf("%d", &n);
	n3 = n;
	do {
		n = (n / 10 + n % 10) % 10 + (n % 10) * 10;
		c++;
	} while (n != n3);
	printf("%d", c);
	return 0;
}