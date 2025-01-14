#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    int max = sides[0], sum = 0, idx = 0;

    for (int i = 1; i < sides_len; i++) {
        if (sides[i] > max) {
            max = sides[i];
            idx = i;
        }
    }
    for (int i = 0; i < sides_len; i++) {
        if (i != idx)
            sum += sides[i];
    }
    if (sum > max)
        return 1;
    else
        return 2;
}