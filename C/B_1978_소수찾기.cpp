#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int input[101];
	for(int i = 0; i < n; i++){
		scanf("%d", &input[i]);
	}
	
	int prime_num = 0;
	
	for(int i = 0; i < n; i++){
		
		int check = 1;
		
		if(input[i] == 1){
			continue;
		}
		
		for(int j = 2; j <= (input[i]-1); j++){
			
			if(input[i] % j == 0){
				check = 0;
				break;
			}
		}
		
		if(check == 1){
			prime_num++;
		}
	}
	
	printf("%d", prime_num);
	
	return 0;
}
