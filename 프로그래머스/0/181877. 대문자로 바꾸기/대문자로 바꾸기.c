#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* myString) {
    int len = strlen(myString);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++) {
        answer[i] = toupper(myString[i]);
    }
    answer[len] = '\0';
    return answer;
}