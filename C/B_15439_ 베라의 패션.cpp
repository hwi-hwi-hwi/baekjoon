#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	// 1 -> 0, 2 -> 1+1=2, 3 -> 2+2+2=6, 4 -> 3+3+3+3=12, 5 -> 4+4+4+4+4=20
	// n -> (n-1)+(n-1)+...+(n-1)= n(n-1)
	int num = n * (n-1);
	
	printf("%d",num);
	
	return 0;
}
