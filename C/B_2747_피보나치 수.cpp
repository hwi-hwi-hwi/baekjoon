#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int F_n1 = 0;
	int F_n2 = 1;
	
	if(n <= 2)
		printf("1");
	else{
		
		for(int i = 2; i <= n; i++){
			
			int sum = F_n1 + F_n2;
			
			F_n1 = F_n2;
			F_n2 = sum;
		}
		
		printf("%d", F_n2);
	}
	
	return 0;
}
