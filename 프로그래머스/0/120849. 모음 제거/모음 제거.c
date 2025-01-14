#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string), j = 0;
    char* answer = (char*)malloc(len * sizeof(char));


    for (int i = 0; i < len; i++) {
        if (my_string[i] != 'a' && my_string[i] != 'e' && 
            my_string[i] != 'o' && my_string[i] != 'i' && my_string[i] != 'u') {
            answer[j++] = my_string[i];
        }
    }
    answer[j] = '\0';
    return answer;
}