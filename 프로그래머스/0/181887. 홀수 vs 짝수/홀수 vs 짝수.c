#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0, sum1 = 0, sum2 = 0;

    for (int i = 0; i < num_list_len; i++) {
        if (i % 2 == 0)
            sum1 += num_list[i];
        else
            sum2 += num_list[i];
    }
    if (sum1 > sum2 || sum1 == sum2)
        return sum1; 
    else 
        return sum2;
}