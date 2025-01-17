#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    int answer = 0;

    for (int i = 0; i < strlen(str2); i++) {
        if (strstr(str2, str1) != NULL)
            return 1;
        else
            return 0;

    }
    return answer;
}