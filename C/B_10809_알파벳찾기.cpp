// �ٽ� �ϱ� 
#include <stdio.h>
#include <string.h>

int main(){
	// ���ڿ� �Է� �ޱ� 
	char string[100] = {0, };
	scanf("%s", string);
	
	// ������ -1 ���� 
	char abc_order[26];
	for(int i = 0; i < 26; i++){
		
		abc_order[i] = -1;
	}
	
	// ���ĺ� �����ϱ� 
	char alphabet[26];
	for(int i = 0; i < 26; i++){
		
		alphabet[i] = 97+i;
	}
	
	// �Է� ���� ���ڿ����� �ߺ� ���� : apple -> ap0le
	int length = strlen(string);
	for(int i = 0; i < length; i++){
		for(int j = i+1; j < length; j++){
			if(string[i] == string[j]){
				string[j] = 0;
			}
		}
	}
	
	// �Է¹迭�� ���ĺ� ���ؼ� ������ �����ϱ� 
	for(int i = 0; i < length; i++){
		for(int j = 0; j <26; j++){
			if(string[i] == alphabet[j]){
				abc_order[j] = i;
			}
		}
	}
	
	// ���
	for(int i = 0; i < 26; i++){
		printf("%d ", abc_order[i]);
	}
	
	return 0;
}
