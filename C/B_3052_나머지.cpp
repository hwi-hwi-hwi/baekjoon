#include <stdio.h>

int main(){
	
	int a[10];
	
	for(int i = 0; i < 10; i++){
		
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < 10; i++){
		
		a[i] = a[i] % 42;
	}
	// 서로 다른 나머지 개수 R  
	int R = 0;
	for(int i = 0; i < 10; i++){
		int count = 0;  // 반복하면서 초기화 
		for(int j = i+1; j < 10; j++){  // a[i]와 같은 수 세기 
			if(a[i] == a[j]){
				count += 1;
			}
		}
		if(count == 0){  // 같은 수 없을 때 1증가 
			R += 1;
		}
	}
	
	printf("%d", R);
}
