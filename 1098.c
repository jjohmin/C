#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int h, w, n, l, d, x, y, i, j;
    int arr[101][101] = {};
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        for (j = 0; j < l; j++)
        {
            if (d == 0)
                arr[x][y + j] = 1;
            else
                arr[x + j][y] = 1;
        }
    }
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= w; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}