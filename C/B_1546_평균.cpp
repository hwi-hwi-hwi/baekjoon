#include <stdio.h>

int main(){
	
	int N;  // ���� ���� 
	int M = 0;  // ���� �ִ밪
	scanf("%d", &N);
	
	float score[N];
	for(int i = 0; i < N; i++){
		
		scanf("%f", &score[i]);
	}
	
	for(int i = 0; i < N; i++){
		
		if(score[i] > M){
			M = score[i];
		}
	}
	
	for(int i = 0; i < N; i++){
		
		score[i] = score[i] / M * 100;
	}
	
	float sum = 0;
	for(int i = 0; i < N; i++){
		
		sum += score[i];
	}
	
	printf("%f", (sum/N));	
	
	return 0;
}
