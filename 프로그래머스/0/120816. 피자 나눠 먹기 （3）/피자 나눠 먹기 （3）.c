#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0, r = 0;

    answer += n / slice;
    if (n % slice == 0)
        return answer;
    else {
        r = n - slice;
        if (r % slice <= n) {
            return answer + 1;
        }
    }
    
    return answer;
}