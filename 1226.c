#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int good[7];
	int num[7];
	int i, j, sum = 8, bonus = 0;
	for (i = 1; i <= 6; i++) scanf("%d", &good[i]);
	scanf("%d", &bonus);
	for (i = 1; i <= 6; i++) scanf("%d", &num[i]);
	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			if (good[i] == num[j])
				sum--;
		}
	}
	if (sum == 3) {
		for (i = 1; i <= 6; i++)
			if (num[i] == bonus) {
				printf("2");
				return 0;
			}
	}
	if (sum >= 6)
		printf("0");
	else if (sum == 2)
		printf("1");
	else
		printf("%d", sum);
	return 0;
}