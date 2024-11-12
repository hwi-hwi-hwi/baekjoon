#include <stdio.h>

int main(){
	
	int number[9];
	int max = 0;
	int max_index;
	
	for(int i = 0; i <= 8; i++){
		
		scanf("%d", &number[i]);
	}
	
	for(int i = 0; i <=8; i++){
		
		if(number[i] > max){
		
			max = number[i];
			max_index = i;
		}
	}
	printf("%d\n", max);
	printf("%d", max_index + 1);
	
	return 0;
}


