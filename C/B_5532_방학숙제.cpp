#include <stdio.h>

int main(){
	
	int L;  // ���� �� L��
	int A, C;  // ���� �� A������, �Ϸ� �ִ� C������ 
	int B, D;  // ���� �� B������, �Ϸ� �ִ� D������
	
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
