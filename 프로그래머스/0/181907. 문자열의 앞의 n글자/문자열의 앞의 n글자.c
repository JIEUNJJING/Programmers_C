#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc((n + 1) *sizeof(char));

    for (int i = 0; i < n; i++) {
        answer[i] = my_string[i];
    }
    answer[n] = '\0';
    return answer;
}