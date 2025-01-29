#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_prefix) {
    int answer = 0, len = strlen(is_prefix);
    if (strncmp(my_string, is_prefix, len) == 0) // 문자열 비교
            return 1;
    return 0;
}