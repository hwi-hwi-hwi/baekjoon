#include <stdio.h>

int main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int multi = a * b * c;
	
	// 0~9�� ���� ����� ���� 0���� �ʱ�ȭ 
	int arr[10] = {0, };
	 
	while(multi > 0){  // 0�� �Ǹ� �ݺ��� ���� 
		
		arr[multi % 10] += 1;  // ������ �ڸ����� �������� �� 
		multi /= 10;  // 1�� �ڸ��� ����� 
	}
	
	for(int i = 0; i < 10; i++){
		
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
