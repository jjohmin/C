#pragma warning(disable:4996)
#include <stdio.h>

struct machine {
	int name;
	int gas;
};

int main(void)
{
	struct machine hum[101];
	int n,i,j;
	int fnum=0, gnum=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &hum[i].name, &hum[i].gas);
	}
	for (i = 1; i <= n - 1; i++) {
		for (j = i + 1; j <= n; j++) {
			if (hum[i].name > hum[j].name) {
				fnum = hum[j].name;
				hum[j].name = hum[i].name;
				hum[i].name = fnum;
				gnum = hum[j].gas;
				hum[j].gas = hum[i].gas;
				hum[i].gas = gnum;
			}
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d %d\n", hum[i].name, hum[i].gas);
	}
	return 0;
}