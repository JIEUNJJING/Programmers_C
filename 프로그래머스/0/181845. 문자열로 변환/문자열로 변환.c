#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(6 * sizeof(char));
    sprintf(answer, "%d", n);
    
    return answer;
}