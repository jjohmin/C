#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[100001] = { 0 };
	long long int n1 = 0, n2 = 0;
	fgets(arr, 100001, stdin);
	for (int i = 0; i <= strlen(arr); i++)
	{
		if (arr[i] == '(')
			n1++;
		if (arr[i] == ')')
			n2++;
	}
	printf("%lld %lld", n1, n2);
	return 0;
}