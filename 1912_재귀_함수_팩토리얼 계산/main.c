#include <stdio.h>

int fac(int i){
	if (i==1){
		return 1;
	}
	
	return i * fac(i-1);
}

int main(){
	int N;
	scanf("%d",&N);
	printf("%d",fac(N));
	return 0;
}
