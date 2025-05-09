#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;
    int r = n;

    while (r >= 0) {
        if (r % 5 == 0) {
            cnt += r / 5;
            printf("%d\n", cnt);
            return 0;
        } else {
            r -= 3;
            cnt++;
        }
    }

    printf("-1\n");
    return 0;
}
