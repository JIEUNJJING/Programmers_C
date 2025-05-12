#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	int N = 0, r = 0, cnt = 0;
	scanf("%d", &N);
	r = N;
	while (r >= 0) {
		if (r % 5 == 0) {
			cnt += r / 5;
			r -= 5 * (r / 5);
			printf("%d", cnt);

			return 0;
		}
		r -= 3;
		cnt++;
	}

	printf("-1");
	return 0;
}