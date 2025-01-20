#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int size = 0;
    for (int i = 0; i < arr_len; i++) {
        size += arr[i];
    }
    int* answer = (int*)malloc(size * sizeof(int));
    int k = 0;
    for (int i = 0; i < arr_len; i++) {
        for (int j = 0; j < arr[i]; j++) {
            answer[k++] = arr[i];
        }
    }
    return answer;
}