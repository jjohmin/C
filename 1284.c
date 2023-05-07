#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num, i, arr[10], cnt = 0, CNT = 0;
	scanf("%d", &num);
	for (i = 2; i < num; i++) {
		if (cnt == 3) {
			printf("wrong number");
			return 0;
		}
		if (num % i == 0) {
			if (cnt == 0) {
				for (int j = 2; j <= i; j++) {
					if (i % j == 0)
						CNT++;
					if ((num / i) % j == 0)
						CNT++;
					if (CNT >= 2) {
						printf("wrong number");
						return 0;
					}
				}
			}
			arr[cnt] = i;
			cnt++;
			arr[cnt] = num / i;
		}
	}
	if (cnt == 0) {
		printf("wrong number");
		return 0;
	}
	for (i = 0; i <= 1; i++)
		printf("%d ", arr[i]);
	return 0;
}