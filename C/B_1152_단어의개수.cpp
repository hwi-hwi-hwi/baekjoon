#include <stdio.h>
#include <string.h>

int main(){
	
	char sentence[1000001];
	// scanf로 문자열을 "%s"로 받게 되면 공백에서 끊기게 됨
	// 이를 해결하기 위해서는 "%[^\n]"를 사용
	//"%[^\n]  : \n이 나올 때까지 전부 입력 받기 
	scanf("%[^\n]", sentence);
	// 문자열 길이, 공백개수, 단어개수 
	int length = strlen(sentence);
	int blanks = 0;
	int words = 0;
	
	// 공백만 입력 받는 경우
	if(length == 1 && sentence[0] == ' '){
		
		printf("%d", words); 
	}
	else{
		
		for(int i = 1; i < length-1; i++){
		// 첫 글자가 공백일 수 있으므로 1부터 시작!! 
		// 마지막 글자가 공백일 수 있으므로 length-1까지!! 반복
			if(sentence[i] == ' '){
				
				blanks += 1;
			}
		} 
		words = blanks + 1;
		printf("%d", words); 
	}
	
	return 0; 
}
