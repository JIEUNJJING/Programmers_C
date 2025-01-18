#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* target) {
    int answer = 0;

    for (int i = 0; i < strlen(my_string); i++) {
        if (strstr(my_string, target))
            return 1;
        else
            return 0;
    }

    return answer;
}