#include <stdio.h>

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	long long result = 1;
	
	for(int i = 1; i <= k; i++){
		
		// nCk = n! / (k! * (n-k)!)
		result *= (n - i + 1) % 10007;  // 분자  n * (n-1) * ... * (n-k+1)
		result /= i;  // 분모 k * (k-1) * ... * 1 
	}
	
	printf("%lld", result);
	
	return 0;
}
