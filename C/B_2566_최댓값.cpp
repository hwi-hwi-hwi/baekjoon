#include <stdio.h>

int main(){
	
	int num[9][9];
	int max = 0;
	int v, h;
	
	for(int i = 0; i < 9; i++){
		
		for(int j = 0; j < 9; j++){
			
			scanf("%d", &num[i][j]);
			
			if(num[i][j] >= max){
				max = num[i][j];
				v = i+1;
				h = j+1;
			}
		}
	}
	
	printf("%d\n", max);
	printf("%d %d", v, h);
	
	return 0;
}
