#include <stdio.h>
#include <string.h>

int main(){
	
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		
		char input[51];
		int count = 0;
		int check = 1;
		scanf("%s", input);
		
		for(int j = 0; j < strlen(input); j++){
			
			if(input[j] == '('){
				count++;
			}
			else if(input[j] == ')'){
				count--;
			}
			
			if(count < 0){
				check = 0;
				break;
			}
		}
		
		if(count == 0 && check){
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	
	return 0;
}
