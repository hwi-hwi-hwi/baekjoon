#include <stdio.h>
#include <string.h>

int main(){
	
	// 그릇이 쌓여지는 방향: ->(왼에서 오)
	// ( : 정방향, ( : 역방향
	
	char input[51];
	scanf("%s", input); 
	
	int height = 0;
	for(int i = 0; i < strlen(input); i++){
		
		if(input[i] == input[i+1])	height += 5;
		else	height += 10;
	} 
	
	printf("%d", height);
	
	return 0;
}
