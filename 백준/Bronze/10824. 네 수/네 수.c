#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	int A, B, C, D;
	char num1[20], num2[20];
    long long r1, r2;

	scanf("%d %d %d %d", &A, &B, &C, &D);
	sprintf(num1, "%d%d", A, B);
	sprintf(num2, "%d%d", C, D);

	r1 = atoll(num1);
	r2 = atoll(num2);

	printf("%lld\n", r1 + r2);

	return 0;
}