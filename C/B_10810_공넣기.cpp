#include <stdio.h>

int main(){
	
	// n: �ٱ��ϰ���, m: �� �ִ� Ƚ��
	int n, m;  
	scanf("%d %d", &n, &m);
	
	int basket[101] = {0, };
	
	// i ~ j: �ٱ��� ��ȣ, k: �� ��ȣ 
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


