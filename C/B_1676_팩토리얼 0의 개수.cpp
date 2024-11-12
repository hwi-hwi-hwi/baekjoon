#include <stdio.h>

// 문제에서 구하고자 하는 것은 2 * 5 (10)의 개수 

int main(){
	
	int n;
	scanf("%d", &n); 
	
	int divisor_2 = 0;
	int divisor_5 = 0;
	
	for(int i = 2; i <= n; i++){
		
		int x = i;
		
		while(x % 2 == 0){
			
			x /= 2;
			divisor_2++;
		}
		while(x % 5 == 0){
			
			x /= 5;
			divisor_5++;
		}
	}
	
	if(divisor_2 >= divisor_5)	printf("%d", divisor_5);
	else if(divisor_5 > divisor_2)	printf("%d", divisor_2);
	
	return 0;
}
