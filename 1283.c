#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int b, i, num;
	double a;
	scanf("%lf %d", &a, &b);
	double result = a;
	for (i = 1; i <= b; i++) {
		scanf("%d", &num);
		if (num >= 0)
			a += (a / 100) * num;
		else
			a -= (a / 100) * (-num);
	}
	if (result - a == 0)
		printf("%.0lf\n", result - a);
	else
		printf("%.0lf\n", -(result - a));
	if (-(result - a) > 0)
		printf("good");
	else if (-(result - a) < 0)
		printf("bad");
	else
		printf("same");
	return 0;
}