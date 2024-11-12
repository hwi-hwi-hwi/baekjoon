#include <stdio.h>

int main(){
	
	// n개 입력 받기 
	int n;
	scanf("%d", &n);
	
	// n개의 정수 입력 받기
	int num[n];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &num[i]);
	}
	
	// 최대, 최소 출력
	/*입력된 모든 값이 음수인 경우, min 변수는 0보다
	작은 값을 갖게 되어 최소값을 올바르게 추적하지 못함  */
	int min = num[0];
	int max = num[0];
	for(int i = 0; i < n; i++){
		
		if(num[i] < min){
			min = num[i];
		}
		
		if(num[i] > max){
			max = num[i];
		}
	}
	
	printf("%d %d", min, max);
	
	return 0;
}
