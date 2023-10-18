#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	double arr[1001];
	double max = 0;
	max = arr[0];
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
		if (max < arr[i])
			max = arr[i];
	}
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i] / max * 100.0;
	}

	printf("%lf", sum / n);
	return 0;
}