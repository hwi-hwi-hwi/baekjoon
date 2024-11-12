#include <stdio.h>
#include <math.h>  // pow(3,2)는 3의 2제곱을 의미
 
int main(){
	
	while(1){
		
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		
		if(a == 0 && b == 0 && c == 0){
			break;
		}
		
		if(pow(a,2) == pow(b,2) + pow(c,2)){
			
			printf("right\n");			
		}
		
		else if(pow(b,2) == pow(a,2) + pow(c,2)){
			
			printf("right\n");
		}
		
		else if(pow(c,2) == pow(a,2) + pow(b,2)){
			
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}
} 
