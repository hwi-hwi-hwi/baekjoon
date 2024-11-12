#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int num;
	int count[10002] = {0, };
	
	for(int i = 0; i < n; i++){
		
		scanf("%d", &num);
		count[num]++;
	}
	for(int i = 1; i <= 10000; i++){
		
		for(int j = 1; j <= count[i]; j++){
			
			printf("%d\n", i);
		}
	}
	
	return 0;
}
