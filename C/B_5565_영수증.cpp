#include <stdio.h>

int main(){
	
	int sum;
	int price[9];
	
	scanf("%d", &sum);
	for(int i = 0; i < 9; i++){
		
		scanf("%d", &price[i]);
	}
	
	for(int i = 0; i < 9; i++){
		
		sum -= price[i];
	}
	
	printf("%d", sum);
}
