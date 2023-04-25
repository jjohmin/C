#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num, i;
	scanf("%d", &num);
	if (num == 1)
		return 0;
	for (i = 1; i <= 6; i++)
	{
		if (num - i <= 6)
			printf("%d %d\n", i, num - i);
		if (num - i <= 1)
			break;
	}
	return 0;
}