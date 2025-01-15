#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    int answer = 0;

    for (int i = 0; i < i < strlen(str1); i++) {
        if (strstr(str1, str2))
            return 1;
        else
            return 2;
    }
    return answer;
}