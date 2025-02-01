#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int i = 0, cnt = 1,m = n;

    while (m != 1) {
        if (m % 2 == 0) { //짝수
            m = m / 2;
            cnt++;
        }
        else { //홀수
            m = 3 * m + 1;
            cnt++;
        }
    }

    int* answer = (int*)malloc((cnt + 1) * sizeof(int));

    answer[i++] = n;
    while (n != 1) {
        if (n % 2 == 0) { //짝수
            n = n / 2;
            answer[i++] = n;
        }
        else { //홀수
            n = 3 * n + 1;
            answer[i++] = n;
        }
    }
    return answer;
}