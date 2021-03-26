#include <stdio.h>
#include <stdlib.h>


#define MAX 2147483641                        // ��ũ�� ����

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



    for (i = 0; i <= one_money; i++) {                                        // ���ϰ��� �ϴ� ū ������ ���� �κй����� ������. 
        big_array[0] = 0;
        min = MAX;
        for (j = 0; j < two_count; j++) {
            // �޸������̼ǵ� �κ� �������� �ظ� �̿��Ͽ� ���ʷ� �� ū ���� ������ ���� ���Ѵ�.
            if (i - array[j] < 0) {
                qu = MAX;                            // 0���� ������ �ƹ� ū �� ����
            }
            else {
                qu = big_array[i - array[j]];        // �޸������̼ǵ� �κ��� ������
            }
            qu_min = min;                            // �װ� qu_min�� �־���

            if (qu > min) {                            // ���� �� ������ üũ �ϴ� ��
                qu_min = min;
            }
            else {
                qu_min = qu;
            }

            min = qu_min;
    
        }

        // ���� ���� �κ� ����(���� ����, �ַ� 0 �Ǵ� 1�϶�)���� Ǭ �� ���� �����Ѵ�. --> �޸������̼�
        printf("%d\n", min);
        big_array[i] = min + 1;        // ó���� big_array[0] = 0 ���⼭ ���� 0���� ���������� 1�� �� �ؾ��Ҳ���..(���� �� ���ߴ���..)
    }
    //(3)������ ���� ū ����(���ϰ��� �ϴ� ū ����)�� �����Ҷ����� �ݺ��Ѵ�.



    printf("%d", big_array[one_money]);                // ������ �κ��� ������ֱ�

    free(big_array);                                            // �Ҵ� ����
    free(array);                                                // �Ҵ� ����
    return 0;
}
