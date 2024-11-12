#include <stdio.h>
#include <string.h>

int main(){
	
	int n, m;
	scanf("%d %d", &n, &m);
	
	char N[500000][21];
	char M[500000][21];
	
	for(int i = 0; i < n; i++){
		
		scanf("%s", N[i]);
	}
	
	for(int i = 0; i < m; i++){
		
		scanf("%s", M[i]);
	}
	
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < m; j++){
			
			if(strcmp(N[i], M[j]) == 0){
				printf("%s\n", N[i]);
				break;
			}
		}
	}
	
	return 0;
}
