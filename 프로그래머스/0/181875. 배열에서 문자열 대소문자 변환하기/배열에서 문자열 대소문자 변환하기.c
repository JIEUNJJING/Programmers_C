#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = (char**)malloc((strArr_len + 1) *sizeof(char*));
    int i = 0, j = 0, k = 0;

    for (i = 0; i < strArr_len; i++) {
        int len = strlen(strArr[i]);
        answer[i] = (char*)malloc(sizeof(char) * (len + 1));

        for (j = 0; j < len; j++) {
            if (i % 2 == 0) {
                answer[i][j] = tolower(strArr[i][j]);
            }
            else {
                answer[i][j] = toupper(strArr[i][j]);
            }
        }
    answer[i][j] = '\0';
    }
    return answer;
}