#include <stdio.h>
#include <string.h>

int main(){
	
	// ���̽����̽� ���� t
	int t;
	scanf("%d", &t);
	
	
	// r�� �ݺ� 1<=r<=8, ���ڿ� s 
	int r;
	char s[20];
	for(int i = 0; i < t; i++){  // t ��ŭ �Է¹ޱ� 

		scanf("%d %s", &r, s);
		
		for(int j= 0; j < strlen(s); j++){  // ���ڿ�s ������� 
			
			for(int k = 0; k < r; k++){  // �ݺ�Ƚ�� r��ŭ s��� 
				printf("%c", s[j]);
			}		
		}
		
		printf("\n");
	}

	return 0;
}
