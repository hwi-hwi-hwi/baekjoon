#include <stdio.h>

int main(){
	
	int arr[8];
	for(int i =0; i < 8; i++){
		
		scanf("%d", &arr[i]);
	}
	
	int result = 0;  // 0:mixed, 1:ascending, 2:descending
	
	// 1. ascending
	if(arr[0] == 1){
		
		for(int i = 1; i < 8; i++){
			if(arr[i] == i+1){
				result = 1;  // ** 1로 고정!!! 
			}
			else{
				result = 0;
				break;
			}
		}
	}
	
	// 2. descending
	if(arr[0] == 8){
		
		for(int i = 1; i < 8; i++){
			if(arr[i] == 8-i){
				result = 2;  // ** 2로 고정!!! 
			}
			else{
				result = 0;
				break;
			}
		}
	}
	
	if(result == 1){
		printf("ascending");
	}
	else if(result == 2){
		printf("descending");
	}
	else{
		printf("mixed");
	}
	
	return 0;
}
