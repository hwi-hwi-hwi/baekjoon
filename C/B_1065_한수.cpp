#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	// 1 <= x <= n
	if(n <= 99){
		
		printf("%d", n);
	}
	else{
		
		int count = 99;
		int a, b, c;
		
		for(int i = 100; i <= n; i++){
			
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			
			if(b-a == c-b)	count++;
		}
		
		printf("%d", count);
	}
	
	return 0;
}
