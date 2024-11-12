#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(){
	
	int n;
	scanf("%d", &n);
	
	char input[20001][51];
	for(int i = 0; i < n; i++){
		
		scanf("%s", &input[i]);
	}
	
	qsort(input, n, sizeof(input[0]), compare);
	
	for(int i = 0; i < n; i++){
		
		if(strcmp(input[i], input[i+1]) != 0)
			printf("%s\n", input[i]);
	}		
	
	return 0;
}

int compare(const void *a, const void *b){
	
	if(strlen((const char*)a) > strlen((const char*)b))
		return 1;
	else if(strlen((const char*)a) < strlen((const char*)b))
		return -1;
	else
		return strcmp((char*)a, (char*)b);
}
