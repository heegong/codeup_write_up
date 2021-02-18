#include <stdio.h>

int print_n(int i,int end){
	if (i > end){
		return 0;
	}
	printf("%d ",i);
	return print_n(i+=2,end);
}

int main(){
	int start;
	int end;
	
	scanf("%d %d",&start, &end);
	
	if (start%2==0){
		start+=1;
	}
	print_n(start,end);
	return 0;
}
