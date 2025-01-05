#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int temp = 0;
    int mid_idx = array_len / 2;

    for (int i = 0; i < array_len - 1; i++) {        
        for (int j = i + 1; j < array_len; j++) {
            if (array[j] < array[i]) {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    
    return array[mid_idx];
}