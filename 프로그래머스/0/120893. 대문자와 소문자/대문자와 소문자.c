#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    char* answer = (char*)malloc((strlen(my_string) + 1)* sizeof(char));
    for (int i = 0; i < strlen(my_string); i++) {
        if (my_string[i] >= 'a' && my_string[i] <= 'z')
            answer[i] = my_string[i] - 32;
        else if (my_string[i] >= 'A' && my_string[i] <= 'Z')
            answer[i] = my_string[i] + 32;
        else
            answer[i] = my_string[i];
    }
    answer[strlen(my_string)] = '\0';
    return answer;
}