#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
    int total = 0, j = 0;

    for (int i = 0; i < str_list_len; i++) {
        if (!strstr(str_list[i], ex))
            total += strlen(str_list[i]);
    }    
    char* answer = (char*)malloc((total + 1) * sizeof(char));
    answer[0] = '\0';
    for (int i = 0; i < str_list_len; i++) {
        if (!strstr(str_list[i], ex)) {
            strcat(answer, str_list[i]);
        }
    }
    return answer;
}