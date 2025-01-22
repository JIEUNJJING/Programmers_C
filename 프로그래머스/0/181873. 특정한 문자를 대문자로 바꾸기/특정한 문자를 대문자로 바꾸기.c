#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* my_string, const char* alp) {
    char* answer = (char*)malloc((strlen(my_string) + 1) * sizeof(char));
    int j = 0;
    for (int i = 0; i < strlen(my_string); i++) {
        if (my_string[i] != *alp)
            answer[j++] = my_string[i];
        else
            answer[j++] = toupper(my_string[i]);
    }
    answer[j] = '\0';

    return answer;
}