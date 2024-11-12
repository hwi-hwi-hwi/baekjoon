#include <stdio.h>

int main(){
	
	int N;  // 정수 N개
	scanf("%d", &N);
	//배열 A를 선언하기 전에 N 값을 입력받아야 합니다.
	//그렇지 않으면 배열의 크기가 정의되지 않은 상태로 선언됩니다.
	//따라서 N을 입력받은 후 배열을 선언해야 합니다.
	
	int A[N];  // 주어질 정수 
	int v;  // 찾을 정수 v 
	

	for(int i = 0; i < N; i++){
		// 정수를 입력받을 때 & 연산자를 사용하여 변수의 주소를 전달합니다.
		scanf("%d", &A[i]);
	}
	scanf("%d", &v);
	
	int num_v = 0;  // 정수 v 개수 
	for(int i = 0; i < N; i++){
		if(v == A[i]){
			num_v += 1;
		}
	}
	
	printf("%d",  num_v);
	
	return 0;
}
