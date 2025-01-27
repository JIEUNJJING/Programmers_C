#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    int j = 0;

    for (int i = n; i < num_list_len; i++) {
        answer[j] = num_list[i];
        j++;
    }
    for (int i = 0; i < n; i++) {
        answer[j] = num_list[i];
        j++;
    }
    return answer;
}