#include <iostream>
#include <climits>

using namespace std;

int main(){
	
	// n: 참가자의 수
	// k: 주어지는 콜라의 양
	// a: 1초에 마실 수 있는 콜라의 양
	
	int n, k, a;
	cin >> n >> k >> a;
	 
	int min_time = INT_MAX;  // 최솟값을 저장할 변수
	
	// t: 참가자가 한 번에 콜라를 마시는 시간 (초)
	// s: 참가자가 콜라를 마신 후 쉬는 시간 (초)
	for(int i = 0; i < n; i++){
		
		int t, s;
		cin >> t >> s;
		
		int one_cycle_coke = t * a;  // 한 주기 동안 마실 수 있는 콜라 양
		int one_cycle_time = t + s;  // 한 주기 동안 걸리는 시간
		
		int total_cycle = k / one_cycle_coke;  // 필요한 전체 주기 수
		int remaining_coke = k % one_cycle_coke;  // 남은 콜라 양
		
		int total_time = total_cycle * one_cycle_time;
		
		if (remaining_coke > 0) {
            int additional_time = (remaining_coke + a - 1) / a; // 남은 콜라를 마시는데 필요한 추가 시간
            total_time += additional_time;
        } else {
            total_time -= s; // 남은 콜라가 없다면 마지막 쉬는 시간 제외
        }

		if(total_time < min_time)
			min_time = total_time;
	}
	
	cout << min_time;
	
	return 0;
}
