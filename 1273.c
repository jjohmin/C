#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num,i;
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0)
			printf("%d ", i);
	}
	return 0;
}