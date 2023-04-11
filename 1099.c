#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int arr[11][11] = { 0 };
	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	i = 2;
	j = 2;
	while (1) {
		if (arr[i][j] == 2) {
			arr[i][j] = 9;
			break;
		}
		arr[i][j] = 9;
		if (arr[i][j + 1] == 1) {
			if (arr[i + 1][j] == 1)
				break;
			i++;
		}
		else
			j++;
	}
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}