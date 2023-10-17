#include <stdio.h>

int main(void)
{
	int a, n, b, num, i = 0;
	scanf("%d", &a);
	do
	{
		if (i == 0) {
			b = a / 10;
			n = a % 10;
		}
		else {
			b = num / 10;
			n = num % 10;
		}
		num = n * 10 + (b + n) % 10;
		i++;
	} while (num != a);
	printf("%d", i);
	return 0;
}