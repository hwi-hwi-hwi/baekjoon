#include <stdio.h>

int main(){
	
	int n[7];
	
	for(int i = 0; i < 7; i++){
		
		scanf("%d", &n[i]);
	}
	
	int odd = 0;  // 홀수 개수 세기 
	for(int i = 0; i < 7; i++){
		if(n[i] % 2 == 1){
			odd += 1;
		}
	}

	//홀수 존재O
	int odd_sum = 0;  // 홀수 합
	int odd_min = 100;  // 홀수 최솟값, 주어지는 자연수가 100보다 작으므로 
	for(int i = 0; i < 7; i++){
		if(n[i] % 2 == 1){
			odd_sum += n[i];
			if(odd_min > n[i]){
				odd_min = n[i];
			} 
		}
	}
		// 홀수 존재X -> -1 출력 
	if(odd == 0){
		printf("-1");
	}
	else{
		// 홀수 합 출력 
	printf("%d\n", odd_sum);
	// 홀수 중 최솟 값 출력 
	printf("%d", odd_min);
	}
	
	return 0;
}
