#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int count = 0;  // �� ��°���� 
	int num = 666;  // ���� ���� 
	while(1){
		
		int temp = num; 
		
		while(temp > 0){
			
			if(temp % 1000 == 666){
				count++;
				break;  // ���� �ݺ��� ���� 
			}
			temp /= 10;  // ���� �ڸ����� �Ѿ�� 
		}
		if(count == n){  // �־��� ���� ã���� 
			printf("%d", num);
			break;  // �ܺ� �ݺ��� ���� 
		}
		num++;
	}
	
	return 0;
}
