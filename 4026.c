#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int arr[6] = { 0 }, i, max = -1, j;
	for (i = 1; i <= 5; i++)
		scanf("%d", &arr[i]);
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 5; j++) {
			if (max < arr[j])
				max = arr[j];
		}
		for (j = 1; j <= 5; j++) {
			if (max == arr[j])
				arr[j] = 0;
		}
		max = -1;
	}
	for (j = 1; j <= 5; j++) {
		if (max < arr[j])
			max = arr[j];
	}
	printf("%d", max);
	return 0;
}