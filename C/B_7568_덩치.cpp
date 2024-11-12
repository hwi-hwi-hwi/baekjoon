#include <stdio.h>

struct person{
	
	int weight;
	int height;
	int rank;
};

int compare(const int *a, const int *b){
	
	return (*a - *b);
}

int main(){
	
	// 사람 수 
	int n;
	scanf("%d", &n);
	
	struct person input[50];
	// 몸무게, 키 입력 받기 
	for(int i = 0; i < n; i++){
		
		scanf("%d %d", &input[i].weight, &input[i].height);
		input[i].rank = 1;
	}
	
	// 순위 매기기 
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < n; j++){
			
			if(input[i].weight < input[j].weight && input[i].height < input[j].height){
				input[i].rank++;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		
		printf("%d ", input[i].rank);
	}
	
	return 0;
}
