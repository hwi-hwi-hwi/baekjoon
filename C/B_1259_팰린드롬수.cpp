#include <stdio.h>
#include <string.h>

int main(){
	
	char input[100000];
	int check;
	
	while(scanf("%s", input) && input[0] != '0'){
		
		check = 0;
		
		int length = strlen(input);
			
		for(int i = 0; i < (length/2); i++){
			if(input[i] != input[length-1 - i]){  // *** ��Ģã�� ***
				check = 1;
				break;
			}
		}
		
		if(check == 0){
			printf("yes\n");
		}
		else if(check == 1){
			printf("no\n");
		}
	}
	
	return 0;
}

/*
��Ģã�� 
2��  0 1
3��  0 2
4��  0 3 / 1 2
5��  0 4 / 1 3
6��  0 5 / 1 4 / 2 3
7��  0 6 / 1 5 / 2 4
*/
