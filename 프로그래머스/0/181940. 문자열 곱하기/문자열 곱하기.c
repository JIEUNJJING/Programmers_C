#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int k) {
    char* answer = (char*)malloc((strlen(my_string) * k + 1) * sizeof(char));
    int idx = 0;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < strlen(my_string); j++) {
            answer[idx++] = my_string[j];
        }
    }
    answer[strlen(my_string) * k] = '\0'; // 문자열 마지막 나타냄 
    return answer;
}
