#include <stdio.h>
#include <string.h>

int main(){
	
	char input[101];
	
	scanf("%s", input);
	
	for(int i = 0; i < strlen(input); i+=10){
		
		for(int j = i; j < i+10 && j < strlen(input); j++){
			
			printf("%c", input[j]);
		}
		
		printf("\n"); 
	}
	
	return 0;
}
