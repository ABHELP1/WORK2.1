#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float a, b, c,sum;
int main() {
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	sum = a + b + c;
	if (sum >= 80) {
		printf("A");
	}
	else if (sum >= 75 && sum <= 79) {
		printf("B+");
	}
	else if (sum >= 70 && sum <= 74) {
		printf("B");
	}
	else if (sum >= 65 && sum <= 69) {
		printf("C+");
	}
	else if (sum >= 60 && sum <= 64) {
		printf("C");
	}
	else if (sum >= 55 && sum <= 59) {
		printf("D+");
	}
	else if (sum >= 50 && sum <= 54) {
	printf("D");
	}
	else if (sum >= 0 && sum <= 49) {
	printf("F");
	}

}