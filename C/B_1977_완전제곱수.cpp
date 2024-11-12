#include <stdio.h>

int main(){
	
	// M~N 자연수 입력 받기 
	int M, N;
	scanf("%d", &M);
	scanf("%d", &N);
	
	int sum = 0;
	int min = 10000;
	
	for(int i = 1; i <= N; i++){
		
		if(i*i >= M && i*i <= N){
			
			sum += i*i;
			if(min > i*i){
				min = i*i;
			}
		}
	}
	
	
	if(sum == 0){
		printf("-1");
	}
	else{
		
		printf("%d\n", sum);
		printf("%d", min);
	}
	
	return 0;
}
