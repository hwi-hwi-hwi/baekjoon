#include <stdio.h>
#include <string.h>

int main(){
	
	int n, m;  // n: 세로(줄), m: 가로(글자수)
	scanf("%d %d", &n, &m);
	 
	char input[11][11];
	char compare[21][21];
	
	for(int i = 0; i < n; i++){
		
		scanf("%s", input[i]);
	}
	
	for(int i = 0; i <n; i++){
		
		scanf("%s", compare[i]);
	}
	
	int equal = 1;
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < m; j++){
			
			if(input[i][j] != compare[i][j*2] || input[i][j] != compare[i][j*2 + 1]){
				equal = 0;
				break;
			}
		}
		
		if(!equal)	break;
	} 
	
	if(equal)	printf("Eyfa");
	else	printf("Not Eyfa");
	
	return 0;
}
