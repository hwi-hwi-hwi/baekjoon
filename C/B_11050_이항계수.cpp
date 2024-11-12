#include <stdio.h>

int factorial(int a);
int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int combi = factorial(n) / (factorial(n-k) * factorial(k));
	
	printf("%d", combi);
	
	return 0;
}

int factorial(int a){
	
	int fact;
	
	if(a > 1){
		fact = a * factorial(a-1);
	}
	else{
		fact = 1;
	}
	
	return fact;
}
