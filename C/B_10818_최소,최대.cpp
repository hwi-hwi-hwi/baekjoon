#include <stdio.h>

int main(){
	
	// n�� �Է� �ޱ� 
	int n;
	scanf("%d", &n);
	
	// n���� ���� �Է� �ޱ�
	int num[n];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &num[i]);
	}
	
	// �ִ�, �ּ� ���
	/*�Էµ� ��� ���� ������ ���, min ������ 0����
	���� ���� ���� �Ǿ� �ּҰ��� �ùٸ��� �������� ����  */
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
