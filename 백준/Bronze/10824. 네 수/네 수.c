#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b, c, d;
    long long num1, num2;
    char str1[20], str2[20];

    scanf("%d %d", &a, &b);
    sprintf(str1, "%d%d", a, b);
    scanf("%d %d", &c, &d);
    sprintf(str2, "%d%d", c, d);
    
    num1 = atoll(str1);
    num2 = atoll(str2);
    
    printf("%lld", num1 + num2);
    
    return 0;
}