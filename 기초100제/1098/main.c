#include <stdio.h>

int main()
{
    int h,w;
	int n;
	int l,d,x,y;
	
	int i,j;
	
    scanf("%d %d", &h,&w);
	scanf("%d",&n);
	int array[100][100];


	

	for(i=0;i<n;i++){
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d){
			for(j=0;j<l;j++){
				if (x+j > h){
					break;
				}
				array[x-1+j][y-1] = 1;
			}
		}
		else{
			for(j=0;j<l;j++){
				if (y+j > w){
					break;
				}
				array[x-1][y-1+j] = 1;
			}
		}
	}
	
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	
    return 0;
}

