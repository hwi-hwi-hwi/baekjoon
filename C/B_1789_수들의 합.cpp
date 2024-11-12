#include <stdio.h>

int main(){
	
	long long s;
	scanf("%lld", &s);
	
	long long sum = 0, n = 1;
	
	long long count = 0;
	
	while(1){
		
		sum += n;
		count++;
		n++;
		
		if(sum > s){
			printf("%lld", count-1);
			break;
		}
	}
	
	return 0;
}
