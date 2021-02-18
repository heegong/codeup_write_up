#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 > num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
}


int find_num(int array[], int what_num, int N,int *pointer_plus,int *buffer) {
	int i;
	for (i = 0; i < N; i++) {
		if (array[i] == what_num) {
			(*pointer_plus)++;
			*buffer = i;
			return (*pointer_plus) - 1;
		}
	}
	return -1;
}

int main() {
	int N;
	scanf("%d", &N);

	int *array = malloc(sizeof(int) * N);
	int *array2 = malloc(sizeof(int) * N);
	int* array3 = malloc(sizeof(int) * N);
	int i;

	for (i = 0; i < N; i++) {
		scanf("%d", &array[i]);
		array2[i] = array[i];
	}

	qsort(array, N, sizeof(int), compare);



	int pointer_plus = 0;
	int buffer;
	for (i = 0; i < N; i++) {
		int a = find_num(array2, array[i], N,&pointer_plus,&buffer);
		array3[buffer] = a;
	}

	for (i = 0; i < N; i++) {
		printf("%d ", array3[i]);
	}

	free(array3);
	free(array2);
	free(array);
	return 0;
}
