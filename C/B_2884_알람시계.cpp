#include <stdio.h>

int main(){
	
	int H, M;  // ½Ã°£, ºÐ
	scanf("%d %d", &H, &M);
	
	if(M - 45 < 0){
		
		if(H - 1 < 0){
			H = 23;
			M += 15;
		}
		else{
			H -= 1;
			M += 15;
		}
		
	}
	else{
		M -= 45;
	}
	
	printf("%d %d", H, M);
	
	return 0; 
}
