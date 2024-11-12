#include <stdio.h>

long long combination(int n, int k);

int main(){
	
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		
		int n, m;
		scanf("%d %d", &n, &m);
		
		printf("%lld\n", combination(m, n));
	}

	return 0;
} 

long long combination(int n, int k){
	
	long long result = 1;
	
	for(int i = 1; i <= k; i++){
		
		// nCk = n! / (k! * (n-k)!)
		result *= (n - i + 1);  // 분자  n * (n-1) * ... * (n-k+1)
		result /= i;  // 분모 k * (k-1) * ... * 1 
	}
	
	return result;
}
