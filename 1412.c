#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num = 0, i, n;
	char arr[91] = { 0 };
	fgets(arr, 91, stdin);
	for (n = 97; n <= 122; n++) {
		num = 0;
		for (i = 0; i <= 91; i++) {
			if (arr[i] != n)
				continue;
			if (arr[i] == n)
				num++;
		}
		printf("%c:%d\n", n, num);
	}
	return 0;
}