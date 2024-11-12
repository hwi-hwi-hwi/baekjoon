#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

struct point input[100001];

int compare(const void *a, const void *b);

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		
		scanf("%d %d", &input[i].x, &input[i].y);
	}
	
	qsort(input, n, sizeof(point), compare);
	
	for(int i = 0; i < n; i++){
		
		printf("%d %d\n", input[i].x, input[i].y);
	}
	
	return 0;
}

int compare(const void *a, const void *b){

	return (*a - *b);
}
