#include <stdio.h>

int main(){
	
	int a;  // ���� ���(��Ʈ�� �Ǹ� ����� �����) 
	int b;  // ���� ���(�� �� ����) 
	int c;  // ��Ʈ�� ���� 
	int n;  // ��Ʈ��  �Ǹŷ� 
	
	scanf("%d", &a); 
	scanf("%d", &b); 
	scanf("%d", &c); 
	
	// ***��� ����***
	//  ���ͺб���: �� ����(�Ǹź��) > �� ���(a + b*n)
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
