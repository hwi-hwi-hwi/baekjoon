#include <stdio.h>
#include <string.h>
 
int main(){
	
	int t;  // 테스트케이스개수
	scanf("%d", &t);
	
	char string[1000];
	char first, last;
	
	
	for(int i = 0; i < t; i++){
		
		scanf("%s", string);
		
		int length = strlen(string);
		
		first = string[0];
		last = string[length - 1];
		
		printf("%c%c\n", first, last);
	}
	
	return 0;
}
