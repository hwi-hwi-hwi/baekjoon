#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y){
	
	return (*(int *)x - *(int *)y);
}

int main(){
	
	int n;
	scanf("%d", &n);
	
	int num[1000];
	
	for(int i = 0; i < n; i++){
		
		scanf("%d", &num[i]);
	}
	
	qsort(num, n, sizeof(int), compare);
	
	for(int i = 0; i < n; i++){
		
		printf("%d\n", num[i]);
	}
	
	return 0;
}
