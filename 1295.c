#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char arr[1001];
	int i = 0;
	scanf("%s", arr);
	while (arr[i] != '\0') {
		if (arr[i] >= 97 && arr[i] <= 122)
			printf("%c", arr[i] - 32);
		else if (arr[i] >= 65 && arr[i] <= 90)
			printf("%c", arr[i] + 32);
		else
			printf("%c", arr[i]);
		i++;
	}
	return 0;
}