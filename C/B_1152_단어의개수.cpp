#include <stdio.h>
#include <string.h>

int main(){
	
	char sentence[1000001];
	// scanf�� ���ڿ��� "%s"�� �ް� �Ǹ� ���鿡�� ����� ��
	// �̸� �ذ��ϱ� ���ؼ��� "%[^\n]"�� ���
	//"%[^\n]  : \n�� ���� ������ ���� �Է� �ޱ� 
	scanf("%[^\n]", sentence);
	// ���ڿ� ����, ���鰳��, �ܾ�� 
	int length = strlen(sentence);
	int blanks = 0;
	int words = 0;
	
	// ���鸸 �Է� �޴� ���
	if(length == 1 && sentence[0] == ' '){
		
		printf("%d", words); 
	}
	else{
		
		for(int i = 1; i < length-1; i++){
		// ù ���ڰ� ������ �� �����Ƿ� 1���� ����!! 
		// ������ ���ڰ� ������ �� �����Ƿ� length-1����!! �ݺ�
			if(sentence[i] == ' '){
				
				blanks += 1;
			}
		} 
		words = blanks + 1;
		printf("%d", words); 
	}
	
	return 0; 
}
