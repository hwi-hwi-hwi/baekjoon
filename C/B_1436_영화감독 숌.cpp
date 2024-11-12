#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int count = 0;  // 몇 번째인지 
	int num = 666;  // 현재 숫자 
	while(1){
		
		int temp = num; 
		
		while(temp > 0){
			
			if(temp % 1000 == 666){
				count++;
				break;  // 내부 반복문 종료 
			}
			temp /= 10;  // 다음 자릿수로 넘어가기 
		}
		if(count == n){  // 주어진 순서 찾으면 
			printf("%d", num);
			break;  // 외부 반복문 종료 
		}
		num++;
	}
	
	return 0;
}
