#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	int n = 0;
	double sum = 0.0;

	scanf("%d", &n);
	int* score = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}

	int max  = score[0];

	for (int i = 0; i < n; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int i = 0; i < n; i++) {
		sum = sum + (((double)score[i] / max) * 100);
	}

	printf("%lf", sum / n);

	return 0;
}