#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    int answer = 0, sum1 = 0, sum2 = 0;

    if (arr1_len == arr2_len) {
        for (int i = 0; i < arr1_len; i++) {
            sum1 += arr1[i];
        }
        for (int j = 0; j < arr2_len; j++) {
            sum2 += arr2[j];
        }
        if (sum1 == sum2) answer = 0;
        else {
            if (sum1 > sum2) answer = 1;
            else answer = -1;
        }
    }
    else {
        if (arr1_len > arr2_len) answer = 1;
        else answer = -1;
    }
    return answer;
}