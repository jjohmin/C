#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int num, xnum, on, tw, th;
	scanf("%d %d", &num, &xnum);
	th = xnum / 100;
	xnum = xnum % 100;
	tw = xnum / 10;
	xnum = xnum % 10;
	on = xnum;
	printf("%d\n%d\n%d\n%d", num * on, num * tw, num * th, (num * on + (num * tw) * 10 + (num * th) * 100));
	return 0;
}