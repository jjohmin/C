#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	int sum = n1 + n2 + n3 + n4;
	if (sum == 0)
		printf("¸ð");
	else if (sum == 1)
		printf("µµ");
	else if (sum == 2)
		printf("°³");
	else if (sum == 3)
		printf("°É");
	else if (sum == 4)
		printf("À·");
	return 0;
}