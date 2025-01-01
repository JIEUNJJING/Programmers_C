// num_list_len은 배열 num_list의 길이입니다.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0, temp = 0;
    for (int i = 0; i < numbers_len - 1; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            if (numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    int result1 = numbers[0] * numbers[1];
    int result2 = numbers[numbers_len - 1] * numbers[numbers_len - 2];

    return (result1 > result2 ? result1 : result2);
}