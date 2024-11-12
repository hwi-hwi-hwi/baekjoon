#include <stdio.h>
#include <string.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	char input[21];
	
	for(int i = 0; i < n; i++){
		
		scanf("%s", input);
		int length = strlen(input);
		
		for(int j = 0; j < length; j++){
			
			if('A' <= input[j] && input[j] <= 'Z'){
				input[j] += 32;
			}
		}
		
		printf("%s\n", input);
	}
	
	return 0;
}
