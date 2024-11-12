#include <stdio.h>

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k); 
	
	int num[10];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &num[i]);
	}
	
	int count = 0;
	for(int i = n-1; i >= 0; i--){
		
		while(k >= num[i]){
			
			count++;
			k -= num[i];
		}
	}
	
	printf("%d", count);
	
	return 0;
}
