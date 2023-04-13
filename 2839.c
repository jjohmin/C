#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int n, i = 0, j = 0, sum = 0;
	scanf("%d", &n);
	while (1)
	{
		if (n % 5 == 0) {
			sum += n / 5;
			break;
		}
		n -= 3;
		sum++;
		if (n <= 0) break;
	}
	if (n < 0) printf("-1");
	else printf("%d", sum);
	return 0;
}