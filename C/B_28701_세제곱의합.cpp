#include <stdio.h>

int main(){
	
	int N;
	scanf("%d", &N);
	
	int sum = 0;
	for(int i = 1; i <= N; i++){
		
		sum += i;
	}
	int sum_3 = 0;
	for(int i = 1; i <= N; i++){
		
		sum_3 += i*i*i;
	}
	
	printf("%d\n", sum);
	printf("%d\n", sum*sum);
	printf("%d\n", sum_3);
	
	return 0;
} 
