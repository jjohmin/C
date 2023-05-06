#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num, i, n;
	scanf("%d", &num);
	if (num == 1)
		for (i = 0; i <= num; i++) {
			scanf("%d", &n);
			printf("%d ", n);
		}
	for (i = 1; i <= num; i++) {
		scanf("%d", &n);
		if (i == 1 || i == (num / 2) + 1 || i == num)
			printf("%d ", n);
	}
	return 0;
}