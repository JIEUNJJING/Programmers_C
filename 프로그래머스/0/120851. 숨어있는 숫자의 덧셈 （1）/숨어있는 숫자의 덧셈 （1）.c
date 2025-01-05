#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string) {
    int answer = 0;
    for (int i = 0; i < strlen(my_string); i++) {
        if (my_string[i] >= '1' && my_string[i] <= '9') {
            answer += my_string[i] - '0';
        }
    }
    return answer;
}