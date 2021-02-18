#include <stdio.h>

int check_str(char cc){
	if (cc=='c' || cc=='C'){
		return 1;
	}
	
	return 0;
}

int main(){
	char st[101];
	
	scanf("%s",st);
	
	int i;
	
	int i_i, i_1, result1 = 0, result2 = 0;
	
	for (i=0;st[i];i++){
		i_i = check_str(st[i]);
		i_1 = check_str(st[i+1]);
		if (i_i){
			result1++;
			if (i_1){
				result2++;
			}
		}
	}
	
	
	printf("%d\n%d",result1,result2);
	
	return 0;
}
