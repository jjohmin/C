#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	long long int num, sum = 0, i;
	scanf("%lld", &num);

	for (i = 1000000000; i >= 1; i /= 10) {
		sum += (num / i);
		num %= i;
	}

	if (sum % 7 == 4)
		printf("suspect\n");
	else
		printf("citizen\n");

	return 0;
}