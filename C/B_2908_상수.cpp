#include <stdio.h>

int main(){
	
	int a[4];
	int b[4];
	
	for(int i = 0; i < 3; i++){
		
		scanf("%1d", &a[i]);
	}
	for(int i = 0; i < 3; i++){
		
		scanf("%1d", &b[i]);
	}
	
	if(a[2] > b[2]){
		for(int i = 2; i >= 0; i--){
			
			printf("%d", a[i]);		
		}
	}
	else if(b[2] > a[2]){
		for(int i = 2; i >= 0; i--){
			
			printf("%d", b[i]);		
		}
	}
	
	if(a[2] == b[2]){
		
		if(a[1] > b[1]){
			for(int i = 2; i >= 0; i--){
			
			printf("%d", a[i]);		
		}
		}
		else if(b[1] > a[1]){
			for(int i = 2; i >= 0; i--){
			
			printf("%d", b[i]);		
		}
		}
	}
	
	if(a[2] == b[2] && a[1] == b[1]){
		
		if(a[0] > b[0]){
			for(int i = 2; i >= 0; i--){
			
			printf("%d", a[i]);		
		}
		}
		else if(b[0] > a[0]){
			for(int i = 2; i >= 0; i--){
			
			printf("%d", b[i]);		
		}
		}
	}
	
	if(a[2] == b[2] && a[1] == b[1] && a[0] == b[0]){
		
		for(int i = 2; i >= 0; i--){
			
			printf("%d", a[i]);		
		}
	}

	return 0;
}
