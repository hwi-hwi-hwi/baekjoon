#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	// a: �������� ���� ���� ��ȭ���� ���� �� ������ �Ÿ�
	// b: �������� �Ʒ��� ���� ��ȭ���� �Ʒ��� �� ������ �Ÿ�
	int paper[100][100] = {0, };
	int a, b;
	for(int i = 0; i < n; i++){
		
		scanf("%d %d", &a, &b);
		
		//������ ������ 
		for(int j = (a-1); j < (a-1)+10; j++){
			
			for(int k = (b-1); k < (b-1)+10; k++){
				
				paper[k][j] = 1;
			}
		}
	}
	
	int count = 0;
	for(int i = 0; i < 100; i++){
		
		for(int j = 0; j < 100; j++){
			
			if(paper[i][j] == 1)	count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
