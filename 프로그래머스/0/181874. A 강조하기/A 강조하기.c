#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* myString) {
    int i = 0, len = strlen(myString);
    char* answer = (char*)malloc((len + 1) * sizeof(char));

    for (i = 0; i < len; i++) {
        if (myString[i] == 'a'){
            answer[i] = toupper(myString[i]);
            }
        else {
            if (myString[i] > 'A' && myString[i] <= 'Z') {
                answer[i] = tolower(myString[i]);
            }
            else
                answer[i] = myString[i];
        }
    }
    answer[i++] = '\0';
    return answer;
}