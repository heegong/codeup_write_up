#include <stdio.h>

int print_n(int i, int sum){
	if (i==0){
		return sum;
	}
	return print_n(--i,sum+=i);
}


int main(){
	int N;
	
	scanf("%d",&N);
	
	int sum = 0;
	sum = print_n(N,sum);
	printf("%d",sum);
	return 0;
}
