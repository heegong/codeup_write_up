#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int print_number(int N,int i) {
	if (i > N) {
		return i;
	}
	printf("%d\n", i);
	return print_number(N, ++i);
}

int main() {
	int N;
	scanf("%d", &N);
	int i = 1;
	print_number(N, i);
	return 0;
}
