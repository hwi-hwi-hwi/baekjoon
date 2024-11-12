#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int count = 0;
	
	while(n >= 0){
		
		if(n % 5 == 0){
			count += n/5;
			printf("%d", count);
			return 0;
		}
		else{
			n -= 3;
			count++;
		}
	}
	
	printf("-1");
	
	return 0;
}
