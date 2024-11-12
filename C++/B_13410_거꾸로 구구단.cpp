#include <iostream>
#include <string>  // to_string, stoi
#include <algorithm>  // reverse, max

using namespace std;

int main(){
	
	int n, k;
	cin >> n >> k;
	
	int answer(0);
	
	for(int i = 1; i <= k; i++){
		
		// i ×N을 문자열로 변환
		string multip  = to_string((i*n));
		// 문자열 multip를 뒤집기
		reverse(multip.begin(), multip.end());
		// 뒤집힌 문자열 multip를 정수로 변환
		int temp = stoi(multip);
		// answer와 tmp 중 큰 값을 answer에 저장
		answer = max(answer, temp);
	}
	
	cout << answer; 
	
	
	return 0;
}
