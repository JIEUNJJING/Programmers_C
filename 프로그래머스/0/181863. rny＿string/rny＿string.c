#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rny_string) {
    int j = 0, cnt = 0;

    for (int i = 0; i < strlen(rny_string); i++) {
        if (rny_string[i] == 'm') {
            cnt++;
        }
    }
    char* answer = (char*)malloc((strlen(rny_string) + cnt) * sizeof(char));

    for (int i = 0; i < strlen(rny_string); i++) {
        if (rny_string[i] == 'm') {
            printf("%d %d %c\n", i, j, rny_string[i]);
            answer[j] = 'r';
            j++;
            answer[j] = 'n';
        }
        else
            answer[j] = rny_string[i];
        j++;
    }
    answer[j] = '\0';
    return answer;
}