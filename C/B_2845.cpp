#include <stdio.h>

int main(){
	
	int L;  // 1m^2 당 사람 수
	int P;  // 넓이
	int N[5];  // 기사-사람 수 
	
	scanf("%d %d", &L, &P);
	for(int i = 0; i < 5; i++){
		
		scanf("%d", &N[i]); 
	}

	for(int j = 0; j < 5; j++){
		
		printf("%d ", (N[j]) - (L*P));
	}
	
}
