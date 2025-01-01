#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int r = n;

    while (r / 10 && r != 0) { // r이 10으로 나누어지며 r이 0이 아닌 동안 반복
        k -= 1; //10인분에 음료수 1개 서비스
        r -= 10; 
    }
    return (n * 12000) + (k * 2000);
}