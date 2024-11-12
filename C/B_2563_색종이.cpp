#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	// a: 색종이의 왼쪽 변과 도화지의 왼쪽 변 사이의 거리
	// b: 색종이의 아래쪽 변과 도화지의 아래쪽 변 사이의 거리
	int paper[100][100] = {0, };
	int a, b;
	for(int i = 0; i < n; i++){
		
		scanf("%d %d", &a, &b);
		
		//검은색 색종이 
		for(int j = (a-1); j < (a-1)+10; j++){
			
			for(int k = (b-1); k < (b-1)+10; k++){
				
				paper[k][j] = 1;
			}
		}
	}
	
	int count = 0;
	for(int i = 0; i < 100; i++){
		
		for(int j = 0; j < 100; j++){
			
			if(paper[i][j] == 1)	count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
