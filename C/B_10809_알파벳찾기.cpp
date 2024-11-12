// 다시 하기 
#include <stdio.h>
#include <string.h>

int main(){
	// 문자열 입력 받기 
	char string[100] = {0, };
	scanf("%s", string);
	
	// 순서에 -1 저장 
	char abc_order[26];
	for(int i = 0; i < 26; i++){
		
		abc_order[i] = -1;
	}
	
	// 알파벳 저장하기 
	char alphabet[26];
	for(int i = 0; i < 26; i++){
		
		alphabet[i] = 97+i;
	}
	
	// 입력 받은 문자열에서 중복 제거 : apple -> ap0le
	int length = strlen(string);
	for(int i = 0; i < length; i++){
		for(int j = i+1; j < length; j++){
			if(string[i] == string[j]){
				string[j] = 0;
			}
		}
	}
	
	// 입력배열과 알파벳 비교해서 순서에 저장하기 
	for(int i = 0; i < length; i++){
		for(int j = 0; j <26; j++){
			if(string[i] == alphabet[j]){
				abc_order[j] = i;
			}
		}
	}
	
	// 출력
	for(int i = 0; i < 26; i++){
		printf("%d ", abc_order[i]);
	}
	
	return 0;
}
