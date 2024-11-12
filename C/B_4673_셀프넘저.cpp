#include <stdio.h>

int main(){
	
	int a, b, c, d;
	int check[10001] = {0, };
		
	for(int i = 1; i <= 10000; i ++){
		
		a = i / 1000;
		b = (i / 100) % 10;
		c = (i / 10) % 10;
		d = i % 10;
		
		if(i + a + b + c + d <= 10000){
			check[i+a+b+c+d] = 1;
		}
	}
	
	for(int i = 1; i <= 10000; i++){
		
		if(check[i] == 0)	printf("%d\n", i);
	}
	
	return 0;
}
