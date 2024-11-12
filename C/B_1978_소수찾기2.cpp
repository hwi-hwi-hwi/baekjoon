#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int num;
	int count = 0;
	
	for(int i = 1; i <= n; i++){
		
		int check = 1;
		scanf("%d", &num);
		
		if(num == 1){
			continue;
		}
		
		for(int j = 2; j <= num-1; j++){
		
			if(num % j == 0){
				check = 0;
				break;
			}
		}
		
		if(check == 1){
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
