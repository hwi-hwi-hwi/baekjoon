#include <stdio.h>

int main(){
	
	int n[7];
	
	for(int i = 0; i < 7; i++){
		
		scanf("%d", &n[i]);
	}
	
	int odd = 0;  // Ȧ�� ���� ���� 
	for(int i = 0; i < 7; i++){
		if(n[i] % 2 == 1){
			odd += 1;
		}
	}

	//Ȧ�� ����O
	int odd_sum = 0;  // Ȧ�� ��
	int odd_min = 100;  // Ȧ�� �ּڰ�, �־����� �ڿ����� 100���� �����Ƿ� 
	for(int i = 0; i < 7; i++){
		if(n[i] % 2 == 1){
			odd_sum += n[i];
			if(odd_min > n[i]){
				odd_min = n[i];
			} 
		}
	}
		// Ȧ�� ����X -> -1 ��� 
	if(odd == 0){
		printf("-1");
	}
	else{
		// Ȧ�� �� ��� 
	printf("%d\n", odd_sum);
	// Ȧ�� �� �ּ� �� ��� 
	printf("%d", odd_min);
	}
	
	return 0;
}
