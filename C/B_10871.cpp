#include <stdio.h>

int main(){
	
	int n;  // n��
	int x;  // ���� x
	scanf("%d %d", &n, &x);
	
	int a[n];
	for(int i = 0; i < n; i++){
		
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		
		if(x > a[i]){
			printf("%d ", a[i]);
		}
	}
	
	return 0;
}
