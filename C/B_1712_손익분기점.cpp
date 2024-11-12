#include <stdio.h>

int main(){
	
	int a;  // 고정 비용(노트북 판매 대수에 상관없) 
	int b;  // 가변 비용(한 대 생산) 
	int c;  // 노트북 가격 
	int n;  // 노트북  판매량 
	
	scanf("%d", &a); 
	scanf("%d", &b); 
	scanf("%d", &c); 
	
	// ***사고 과정***
	//  손익분기점: 총 수입(판매비용) > 총 비용(a + b*n)
	// -> n * c > a + b*n
	// n > a / (c - b)
	// n = a/(c-b) + 1
	
	if(c - b <= 0){
		
		printf("-1");
	}
	else{
		
		n = a/(c-b) + 1;
		printf("%d", n);
	}
	
	return 0; 
}
