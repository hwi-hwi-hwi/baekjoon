#include <stdio.h>

int main(){
	
	// 테스트 개수 t 
	int t;
	scanf("%d", &t);
	
	// t만큼 반복해서 입력 받기 
	for(int i = 0; i < t; i++){
		
		// 자연수 개수 n 
		int n;
		scanf("%d", &n);
		// 자연수 입력 받기
		int num;
		int sum = 0; 
		for(int j = 0; j < n; j++){
			
			scanf("%d", &num);
			sum += num;
		} 
		 printf("%d\n", sum);
	}
	
	return 0;
}
