#include <stdio.h>

int main(){
	
	// �׽�Ʈ ���� t 
	int t;
	scanf("%d", &t);
	
	// t��ŭ �ݺ��ؼ� �Է� �ޱ� 
	for(int i = 0; i < t; i++){
		
		// �ڿ��� ���� n 
		int n;
		scanf("%d", &n);
		// �ڿ��� �Է� �ޱ�
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
