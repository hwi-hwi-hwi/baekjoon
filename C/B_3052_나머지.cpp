#include <stdio.h>

int main(){
	
	int a[10];
	
	for(int i = 0; i < 10; i++){
		
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < 10; i++){
		
		a[i] = a[i] % 42;
	}
	// ���� �ٸ� ������ ���� R  
	int R = 0;
	for(int i = 0; i < 10; i++){
		int count = 0;  // �ݺ��ϸ鼭 �ʱ�ȭ 
		for(int j = i+1; j < 10; j++){  // a[i]�� ���� �� ���� 
			if(a[i] == a[j]){
				count += 1;
			}
		}
		if(count == 0){  // ���� �� ���� �� 1���� 
			R += 1;
		}
	}
	
	printf("%d", R);
}
