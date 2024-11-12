#include <stdio.h>

int main(){
	
	int n, m;
	scanf("%d %d", &n, &m);
	
	int cards[101];
	
	for(int i = 0; i < n; i++){
		
		scanf("%d", &cards[i]);
	}
	
	int apporx = 0;
	for(int i = 0; i < n-2; i++){
		
		for(int j = i+1; j < n-1; j++ ){
			
			for(int k = j+1; k < n; k++){
				
				int sum = cards[i] + cards[j] + cards[k];
				
				if(apporx <= sum && sum <= m){
					
					apporx = sum;
				}
			}
		}
	}
	
	printf("%d", apporx);

	return 0;
}
