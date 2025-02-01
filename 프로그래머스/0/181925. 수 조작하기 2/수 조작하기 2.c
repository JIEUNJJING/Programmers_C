#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int numLog[], size_t numLog_len) {
    char* answer = (char*)malloc((numLog_len + 1)*sizeof(char));
    int j = 0;
    for (int i = 1; i < numLog_len; i++) {
        if (numLog[i] - numLog[i - 1] == 1) 
            answer[j++] = 'w';
        else if (numLog[i] - numLog[i - 1] == -1)
            answer[j++] = 's';
        else if (numLog[i] - numLog[i - 1] == 10)
            answer[j++] = 'd';
        else 
            answer[j++] = 'a';
    }
    answer[j] = '\0';
    return answer;
}