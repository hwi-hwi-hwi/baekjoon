#include <stdio.h>
#include <string.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	char input[101];
	int count = 0;
	for(int i = 0; i < n; i++){
		
		scanf("%s", input);
		
		int alphabet[26] = {0, };
		
		for(int k = 0; k < strlen(input); k++){
			
			char word = input[k];
			
			if(alphabet[word - 'a'] == 0){
				alphabet[word - 'a'] = 1;
			}
			else if(input[k-1] != input[k]){
				break;
			}
			
			if(k+1 == strlen(input))	count++;
		}
	}
	
	printf("%d", count);

	return 0;
}
