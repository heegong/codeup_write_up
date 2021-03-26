#include <stdio.h>
#include <stdlib.h>


#define MAX 2147483641                        // 매크로 선언

int main() {
    int i, j;
    int min, qu, qu_min;

    int one_money;
    int two_count;
    scanf("%d", &one_money);
    scanf("%d", &two_count);
    int* array = (int*)malloc(two_count * sizeof(int));

    for (i = 0; i < two_count; i++) {
        scanf("%d", array + i);
    }

    int* big_array = (int*)malloc((one_money + 1) * sizeof(int));



    for (i = 0; i <= one_money; i++) {                                        // 구하고자 하는 큰 문제를 작은 부분문제로 나눈다. 
        big_array[0] = 0;
        min = MAX;
        for (j = 0; j < two_count; j++) {
            // 메모이제이션된 부분 문제들의 해를 이용하여 차례로 더 큰 상위 문제의 답을 구한다.
            if (i - array[j] < 0) {
                qu = MAX;                            // 0보다 작으면 아무 큰 값 저장
            }
            else {
                qu = big_array[i - array[j]];        // 메모이제이션된 부분을 가져옴
            }
            qu_min = min;                            // 그걸 qu_min에 넣어줌

            if (qu > min) {                            // 누가 더 작은지 체크 하는 것
                qu_min = min;
            }
            else {
                qu_min = qu;
            }

            min = qu_min;
    
        }

        // 가장 작은 부분 문제(종료 조건, 주로 0 또는 1일때)부터 푼 뒤 값을 저장한다. --> 메모이제이션
        printf("%d\n", min);
        big_array[i] = min + 1;        // 처음에 big_array[0] = 0 여기서 보면 0으로 설정했으니 1을 더 해야할꺼다..(내가 왜 더했더라..)
    }
    //(3)과정을 가장 큰 문제(구하고자 하는 큰 문제)에 도달할때까지 반복한다.



    printf("%d", big_array[one_money]);                // 마지막 부분을 출력해주기

    free(big_array);                                            // 할당 해제
    free(array);                                                // 할당 해제
    return 0;
}
