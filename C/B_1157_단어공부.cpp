#include <stdio.h>
#include <string.h>

int main(){
	
	char input[1000000];  // 입력값
	scanf("%s", input); 
	
	int length = strlen(input);  // 입력값 길이 
	int alphabet [26] = {0, };  // 알파벳
	int count = 0;  // for문에서 알파벳 카운트 용도의 변수 
	
	// 알파벳 각각 몇 번 사용했는지 카운트 
	for(int i = 0; i < length; i++){
		
		if(input[i] >= 'A' && input[i] <= 'Z'){
			count = input[i] - 'A';
		}
		else if(input[i] >= 'a' && input[i] <= 'z'){
			count = input[i] - 'a';
		}
		
		alphabet[count] += 1;
	}
	
	int most_alpha;  // 가장 많이 사용된 알파벳 
	int max = 0;  // 최대값 비교 용도의 변수 
	// 가장 많이 사용된 알파벳 찾기
	for(int i = 0; i <= 25; i++){
		if(alphabet[i] > max){
			max = alphabet[i];
			most_alpha = i;
		}
	}
	
	//결과 겹치는지 확인하고 답 구하기 
	int check = 0;
	for(int i = 0; i <= 25; i++){
		if(alphabet[i] == max){
			check++;
		}
	}
	
	if(check >= 2){
		printf("?");
	}
	else{
		printf("%c", (most_alpha + 65));
	}
	
	return 0;
}
