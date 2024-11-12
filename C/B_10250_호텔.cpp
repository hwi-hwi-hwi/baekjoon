#include <stdio.h>

int main(){
	
	int w, h, n;  // w호 h층 n번째 
	int t;  // 테스트 케이스 개수
	
	int room[9802];
	
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		
		scanf("%d %d %d", &h, &w, &n);
		
		for(int j = 1, l = 0; j <= w; j++){  // j 호 
		
			for(int k = 1; k <= h; k++){  // k 층 
				room[l] = (k*100) + (j);
				l++;
			}
		}
		
		printf("%d\n", room[n-1]);
	}
	
	return 0; 
}
