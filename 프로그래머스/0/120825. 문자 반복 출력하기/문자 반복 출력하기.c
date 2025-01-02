#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc((strlen(my_string) * n) * sizeof(char));
    int k = 0;

    for (int i = 0; i < strlen(my_string); i++) {
        for (int j = 0; j < n; j++) {
            answer[k] = my_string[i];
            k++;
        }
    }
    answer[k] = '\0';
    return answer;
}