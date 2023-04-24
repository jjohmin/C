#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num, j = 1;
	scanf("%d", &num);
	for (long long int i = 10; i <= 10000000000; i = i * 10) {
		if ((i - num) > 0) {
			printf("%d", j);
			break;
		}
		j++;
	}
	return 0;
}