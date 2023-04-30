#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int h, m, num;
	scanf("%d %d", &h, &m);
	num = (h + 24) * 60 + m - 30;
	h = (num / 60) % 24;
	m = num % 60;
	printf("%d %d", h, m);
	return 0;
}