#include <stdio.h>
#include <string.h>

int main(){
	
	char words[101];
	scanf("%s", words);
	
	int length = strlen(words);	
	
	for(int i = 0; i < length; i++){
		// 대문자일 때 
		if('A' <= words[i] && words[i] <= 'Z'){
			
			words[i] += 32;
		}
		// 소문자일 때 
		else if('a' <= words[i] && words[i] <= 'z'){
			
			words[i] -= 32;
		}
	}
	
	printf("%s", words);
	
	return 0;
}
