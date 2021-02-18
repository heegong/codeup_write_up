#include <stdio.h>

int main()
{
    int i,j;
    int food_x,food_y;
    int x=1,y=1;
    int array[15][15];
    for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			scanf("%d", &array[i][j]);
			if (array[i][j]==2){
				food_x=j;
				food_y=i;
			}
		}
	}
	

    while(1){
    	array[y][x] = 9;
    	if (food_x==x && food_y==y){
    		break;
		}
		
		if (array[y+1][x]==1 && array[y][x+1]==1){
			break;
		}
		
    	
    	if (array[y][x+1]!=1){
    		x++;
		}
		else{
			y++;
		}
    	
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
    

    return 0;
}

