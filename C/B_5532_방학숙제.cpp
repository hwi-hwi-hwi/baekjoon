#include <stdio.h>

int main(){
	
	int L;  // 방학 총 L일
	int A, C;  // 국어 총 A페이지, 하루 최대 C페이지 
	int B, D;  // 수학 총 B페이지, 하루 최대 D페이지
	
	scanf("%d", &L);
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	
	int kor = 0;
	int math = 0;
	
	if(A % C == 0){
		kor = A / C;
	}
	else{
		kor = A / C + 1;
	}
	
	if(B % D == 0){
		math = B / D;
	}
	else{
		math = B / D + 1;
	}
	
	if(kor >= math){
		printf("%d", L-kor);
	}
	else{
		printf("%d", L-math);
	}
	
	return 0;
}
