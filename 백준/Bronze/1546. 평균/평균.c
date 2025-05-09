#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    double max = 0.0, sum = 0.0;
    scanf("%d", &n);

    double* scores = (double*)malloc(sizeof(double) * n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max)
            max = scores[i];
    }

    for (int i = 0; i < n; i++) {
        sum += (scores[i] / max) * 100;
    }

    printf("%lf", sum / n);
    return 0;
}