#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int delete_list[], size_t delete_list_len) {
    int* answer = (int*)malloc(arr_len * sizeof(int));
    int k = 0;
    bool f = false;
    for (int i = 0; i < arr_len; i++) {
        for(int j = 0; j < delete_list_len; j++) {
            if (arr[i] == delete_list[j]) {
                f = true;
            }
        }
        if (f == false) {
            answer[k] = arr[i];
            k++;
        }
        if (f == true)
            f = false;
    }
    return answer;
}