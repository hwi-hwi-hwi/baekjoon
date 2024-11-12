#include <stdio.h>
#include <math.h>

int main(){
	
	int m, n;
	scanf("%d %d", &m, &n);
	
	int sum = 0;
	int min = 10001;
	int flag = 0;
	
	for(int i = m; i <= n; i++){
		
		if(i == 1)		continue;
		 
		int check = 1;
		
		for(int j = 2; j <= sqrt(i); j++){
			
			if(i % j == 0){
				check = 0;
				break;
			}
			
		}
		
		if(check){
			sum += i;
			flag++;
			if(i < min)		min = i;
		}
	}
	
	if(flag == 0){
		printf("-1");
	}
	else	printf("%d\n%d", sum, min);
	
	return 0;
}
