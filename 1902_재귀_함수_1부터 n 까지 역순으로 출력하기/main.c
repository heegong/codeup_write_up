#include <stdio.h>


int print_n(i){
	printf("%d\n",i);
	if (i==1){
		return 0;
	}
	return print_n(--i);
}


int main(){
	int *input;
	scanf("%d",&input);
	print_n(input);
	return 0;
}
