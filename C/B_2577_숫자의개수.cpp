#include <stdio.h>

int main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int multi = a * b * c;
	
	// 0~9의 공간 만들고 값을 0으로 초기화 
	int arr[10] = {0, };
	 
	while(multi > 0){  // 0이 되면 반복분 정지 
		
		arr[multi % 10] += 1;  // 마지막 자릿수가 나머지가 됨 
		multi /= 10;  // 1의 자리수 지우기 
	}
	
	for(int i = 0; i < 10; i++){
		
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
