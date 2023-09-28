#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// terms_len�� �迭 terms�� �����Դϴ�.
// privacies_len�� �迭 privacies�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], size_t privacies_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(privacies_len * sizeof(int));
    int cnt = 0, k, count = 0;
    int Year = 0, Month = 0, Day = 0, term = 0;
    int today_Year = 0, today_Month = 0, today_Day = 0;
    char t;
    int sum[3];
    // ���� ��¥ ������
    for (int i = 0; i < 4; i++) {
        today_Year *= 10;
        today_Year += (today[i]) - '0';
    }
    if (today[5] != '0') {
        today_Month += (today[5]) - '0';
        today_Month *= 10;
    }
    today_Month += (today[6] - '0');
    if (today[8] != '0') {
        today_Day += (today[8] - '0');
        today_Day *= 10;
    }
    today_Day += (today[9] - '0');
    printf("%d %d %d\n\n", today_Year, today_Month, today_Day);
    for (int j = 0; j < privacies_len; j++) {
        // ��¥ ������
        Year = 0, Month = 0, Day = 0, term = 0;;
        for (int i = 0; i < 4; i++) {
            Year *= 10;
            Year += (privacies[j][i] - '0');
        }
        if (privacies[j][5] != '0') {
            Month += (privacies[j][5] - '0');
            Month *= 10;
        }
        Month += (privacies[j][6] - '0');
        if (privacies[j][8] != '0') {
            Day += (privacies[j][8] - '0');
            Day *= 10;
        }
        Day += (privacies[j][9] - '0');

        // term ���ϱ� �ڸ�
        t = privacies[j][11];
        for (int i = 0; i < terms_len; i++) {
            if (t == terms[i][0]) {
                k = 2;
                if (terms[i][k + 1] == '\0') {
                    term *= 10;
                    term += (terms[i][k] - '0'); // ���ڸ����� ��� ���
                    k++;
                }
                else if (terms[i][4] != '\0')
                    term += 100;
                if (term == 0) {
                    term += (terms[i][2] - '0');
                    term *= 10;
                    term += (terms[i][3] - '0');
                }

            }
        }

        Month += term;
        while (Month > 12) {
            Year += 1;
            Month = Month - 12;
        }
        printf("%d %d %d %d \n", Year, Month, Day, term);
        if ((today_Year > Year) || (today_Year == Year && today_Month > Month) || (today_Year == Year && today_Month == Month && today_Day > Day) || (today_Year == Year && today_Month == Month && today_Day == Day))
            answer[cnt++] = j + 1;

    }

    return answer;
}