#include <stdio.h>

int main(){
	
	int students[31] = {0, };
	
	for(int i = 0; i <= 27; i++){
		
		int submitted;
		scanf("%d", &submitted);
		students[submitted] = 1;
		
	}
	
	for(int i = 1; i <= 30; i++){
		
		if(students[i] == 0){
			
			printf("%d\n", i);
		}
	}
}
