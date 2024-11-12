#include <stdio.h>
#include <string.h>

int main(){
	
	char input[101];
	scanf("%s", input);
	
	int count = strlen(input);
	
	for(int i = 0; i < strlen(input); i++){
		
		if(input[i] == 'c'){
			if(input[i+1] == '=' || input[i+1] == '-')
				count--;
		}
		
		if(input[i] == 'd'){
			if(input[i+1] == 'z' && input[i+2] == '=')
				count--;
			else if(input[i+1] == '-')
				count--;
		}
		
		if(input[i] == 'l'){
			if(input[i+1] == 'j')
				count--;
		}
		
		if(input[i] == 'n'){
			if(input[i+1] == 'j')
				count--;
		}
		
		if(input[i] == 's'){
			if(input[i+1] == '=')
				count--;
		}
		
		if(input[i] == 'z'){
			if(input[i+1] == '=')
				count--;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
