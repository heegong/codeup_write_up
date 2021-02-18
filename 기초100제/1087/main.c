#include <stdio.h>

int main()
{
    int n, i=1, s=0;
	scanf("%d", &n);
	while(1){
		s+=i;
	  if(s>=n){
		break;
	  }
		i+=1;
	} 
	printf("%d", s);

    return 0;
}

