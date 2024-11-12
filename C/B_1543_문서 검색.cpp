#include <stdio.h>
#include <string.h>

int main(){
	
	char input[2501];
	char comp[51];
	
	gets(input);
	gets(comp);
	
	int i = 0, j = 0, count = 0, re = 0;
	
	while(i <strlen(input)){
		
		if(input[i++] != comp[j++]){
			j = 0;
			re++;
			i = re;
		}
		else if(j == strlen(comp)){
			count++;
			j = 0;
			re = i;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
