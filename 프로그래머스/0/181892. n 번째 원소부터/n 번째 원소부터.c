#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc((num_list_len - n + 1) * sizeof(int));
    int j = 0;
    for (int i = n - 1; i < num_list_len; i++) {
        answer[j] = num_list[i];
        j++;
    }

    return answer;
}