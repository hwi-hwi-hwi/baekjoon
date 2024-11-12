#include <stdio.h>

int main(){
	
	//n: 바구니 개수, m: 바꾸는 횟수 
	int n, m;
	scanf("%d %d", &n, &m);
	
	int basket[101];
	for(int i = 0; i < n; i++){
		
		basket[i] = i+1;
	}
	
	int a, b;
	for(int i =0; i < m; i++){
		
		scanf("%d %d", &a, &b);
		int temp;
		temp = basket[a-1];
		basket[a-1] = basket[b-1];
		basket[b-1] = temp;
	}
	
	for(int i = 0; i < n; i++){
		
		printf("%d ", basket[i]);
	}
	
	return 0;
}
