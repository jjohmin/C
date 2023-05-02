#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int k, h, num = 0, i;
	scanf("%d %d", &k, &h);
	if (k % 2 == 0)
		for (i = 1; i <= k / 2; i++)
			num += 10;
	else
		for (i = 1; i <= k; i += 2)
			num++;
	if (h % 2 == 0)
		for (i = 1; i <= h / 2; i++)
			num += 10;
	else
		for (i = 1; i <= h; i += 2)
			num++;
	printf("%d", num);
	return 0;
}