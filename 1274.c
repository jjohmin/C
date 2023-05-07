#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num, i;
	scanf("%d", &num);
	for (i = 2; i < num; i++)
		if (num % i == 0) {
			printf("not prime");
			return 0;
		}
	printf("prime");
	return 0;
}