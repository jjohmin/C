#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int n, m = 0;
	scanf("%d", &n);
	for (int i = 1; i < n; i += 10)
		m++;
	if (n % 10 == 1)
		m++;
	printf("%d", m);
	return 0;
}