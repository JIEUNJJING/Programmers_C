#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* names[], size_t names_len) {
    char** answer = (char**)malloc((names_len / 5 + 1) * sizeof(char*));
    int j = 0;
    for (int i = 0; i < names_len; i++) {
        if (i % 5 == 0) {
            answer[j] = (char*)malloc((strlen(names[i]) + 1) * sizeof(char));
            strcpy(answer[j], names[i]);
            j++;
        }
    }
    answer[j] = NULL;
    return answer;
}