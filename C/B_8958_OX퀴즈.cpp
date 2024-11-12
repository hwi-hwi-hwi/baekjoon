#include <stdio.h>
#include <string.h>

int main(){
	
	int t;
	scanf("%d", &t);
	
	char ox[80];
	int sum, score;
	
	for(int i = 0; i < t; i++){
		
		scanf("%s", ox);
		
		sum = 0;
		score = 1;
		
		for(int j = 0; j < strlen(ox); j++){
			
			if(ox[j]  == 'O'){
				sum += score;
				score++;
			}
			if(ox[j] == 'X'){
				score = 1;
			}
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}
