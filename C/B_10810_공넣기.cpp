#include <stdio.h>

int main(){
	
	// n: 바구니개수, m: 공 넣는 횟수
	int n, m;  
	scanf("%d %d", &n, &m);
	
	int basket[101] = {0, };
	
	// i ~ j: 바구니 번호, k: 공 번호 
	int i, j, k;
	for(int a = 0; a < m; a++){
		
		scanf("%d %d %d", &i, &j, &k);
		
		for(int b = i; b <= j; b++){
			
			basket[b-1] = k;
		}
	}
	
	for(int a = 0; a < n; a++){
		
		printf("%d ", basket[a]);
	}
	
	
	return 0;
}


