#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    char arr;
    while (scanf("%c", &arr) != EOF)
    {
        if (arr >= 97 && arr <= 122) {
            if (arr + 3 < 123)
                printf("%c", arr + 3);
            else if (arr + 3 >= 123)
                printf("%c", arr - 23);
        }
        if (arr == ' ')
            printf(" ");
    }
    return 0;
}