#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
    int k = 0;
    char** answer = (char**)malloc((todo_list_len + 1) * sizeof(char*));

    for (int i = 0; i < todo_list_len; i++) {
        if (finished[i] == false) {
           answer[k] = (char*)malloc((todo_list_len + 1) * sizeof(char));
           strcpy(answer[k],todo_list[i]); 
           k++;
        }
    }
    return answer;
}