// 유클리드 호제법 이용한 풀이
#include <stdio.h>

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	
	int large, small;
	int gcm, lcm;
	if(a >= b){
		large = a;
		small = b;
	}
	else if(b > a){
		large = b;
		small = a;
	}
	
	while(large % small != 0){
		
		int temp = large % small;
		large = small;
		small = temp;
	}
	
	gcm = small;
	lcm = (a * b) / gcm;
	
	printf("%d\n", gcm);
	printf("%d", lcm);	
	
	return 0;
} 
