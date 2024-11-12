#include <stdio.h>

int main(){
	
	// k개 정수 
	int k;
	scanf("%d", &k);
	
	int input[100001];
	int num[100001];
	int count = 0;
	int sum = 0;
	
	for(int i = 0; i < k; i++){
		
		scanf("%d", &input[i]);
	}
	for(int i = 0; i < k; i++){
		
		// 0이 아니면 다른 배열에 저장 
		if(input[i] != 0){
			num[count] = input[i];
			count++;
		}
		else if(input[i] == 0){
			num[count-1] = 0;
			count--;
		}
	}
	for(int i = 0; i < count; i++){
		
		sum += num[i];
	}
	
	printf("%d", sum);

	return 0; 
}
