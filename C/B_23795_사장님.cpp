#include <stdio.h>

int main(){
	
	int money;
	int sum = 0;
	while(scanf("%d", &money) && money != -1){
		
		sum += money;
	}
	
	printf("%d", sum);
	
	return 0;
}
