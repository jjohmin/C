#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	long long int n, i = 1;
	scanf("%lld", &n);
	long long int min = n - (i * i), num = 1;
	for (i = 2; i <= n; i++) {
		if (n - (i * i) < 0)
			break;
		if (min > n - (i * i)) {
			min = n - (i * i);
			num = i;
		}
	}
	printf("%lld %lld", min, num);
	return 0;
}