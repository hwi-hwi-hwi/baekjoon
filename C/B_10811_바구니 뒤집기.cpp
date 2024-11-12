#include <stdio.h>

void swap(int *a, int *b);

int main(){
	
	int n, m;
	scanf("%d %d", &n, &m);
	
	int basket[100] = {0, };
	for(int a = 0; a < n; a++){
		
		basket[a] = a+1;
	}
	
	for(int a = 0; a < m; a++){
		
		int i, j;
		scanf("%d %d", &i, &j);
		
		while(i < j){
			
			swap(&basket[i-1], &basket[j-1]);
			i++;
			j--;
		} 
	}
	
	for(int a = 0; a < n; a++){
		
		printf("%d ", basket[a]);
	}
	
	return 0;
}

void swap(int *a, int *b){
	
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
