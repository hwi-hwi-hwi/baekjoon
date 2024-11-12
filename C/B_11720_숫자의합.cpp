#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	// 연속된 숫자를 입력받을 때 각각을 저장하기 위해
	//  char 문자열 배열 이용!!
	char a[100];
	int sum = 0;
	scanf("%s", a);
	
	for(int i = 0; i < n; i++){
		//해당하는 int형으로 바꾸기 위해서 char형의 '0'을 빼줘야 함 
		sum += a[i] - '0';
	}
	printf("%d", sum);
	
	return 0;
}
