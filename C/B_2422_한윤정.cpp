#include <stdio.h>

int main(){
	
	int N, M;
	int icecream[201][201] = {0, };
	
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < M; i++){
		
		int a, b;
		scanf("%d %d", &a, &b);
		
		icecream[a][b] = 1;
		icecream[b][a] = 1;
	}
	
	int count = 0;
	
	for(int i = 1; i <= N; i++){
		
		for(int j = i+1; j <= N; j++){
			
			if(!icecream[i][j]){
				for(int k = j+1; k <= N; k++){
					
					if(!icecream[i][k] && !icecream[j][k]){
						count++;
					}
				}
			}
		}
	}
	
	printf("%d", count);

	return 0;
}
