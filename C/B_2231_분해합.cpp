#include <stdio.h>

int main(){
	
	// 분해합 : 자연수 N과 N을 이루는 각 자리수의 합
	// 생성자 : 자연수 M의 분해합이 N 일 때, M을 N의 생성자라고 함
	// 어떤 자연수는 생성자가 없을 수도, 여러 개일 수도 있음 
	
	// 자연수 N이 주어졌을 때, N의 가장 작은 생성자 M을 구하시오. 
	// -> 분해합 N이 주어졌을 때, 분해합 N은 생성자 M 보다 무조건 크기 때문에
	// 1 ~ N-1 까지 분해합을 찾아, 가장 처음 M이 나오면 출력하고 아니면 0 출력하기
	// https://itadventure.tistory.com/158 참고해보기 
	 
	int N, M = 0;
	scanf("%d", &N);
	
	// 주어진 N이 몇자리숫자인지 확인 
	int tmp = N, count = 0;
	while(tmp > 0){
		
		tmp /= 10;
		count++;
	}
	
	// 반복문 시작할 숫자 구하기
	int begin = N - (count * 9);
	if(begin <= 0){
		begin = 1;
	}
	
	// 생성자 M 찾기
	int num, sum = 0; 
	for(int i = begin; i <= (N-1); i++){
		
		num = i; 
		sum = num;
		
		// 각 자리수 더해주기 
		while(num > 0){
			
			sum += (num % 10);  // 맨 뒤 자리(나머지) 더해주기 
			num /= 10;  // 맨 뒤 자리 없애기 
		}
		
		// 현재 반복문의 값 i(num)를 통해 구한 합 sum이 N과 같은지 확인 
		if(sum == N){
			M = i;
			break;
		}
 	}
	
	printf("%d", M);

	return 0;
}
