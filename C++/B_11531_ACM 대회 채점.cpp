#include <iostream>

using namespace std;

int main(){
	
	// 패널티:  문제를 맞힌 시각 + 틀린 횟수*20
	int m;
	string prob, result;
	
	int correct(0), total_time(0);
	
	int wrong_count[26] ={0};  // 각 문제에 대한 잘못된 시도 횟수를 저장하는 배열
	
	
	while(true){
		
		cin >> m;
		if(m == -1)		break;
		cin >> prob >> result;
		
		int prob_index = prob[0] - 'A';
		// 'A'는 0, 'B'는 1, ... 'Z'는 25
		
		
		if(result == "wrong"){
			// 해당 문제의 틀린 횟수 증가
			wrong_count[prob_index]++;
		}
		else if(result == "right"){
			correct++;
			total_time += m + (wrong_count[prob_index] * 20);
		}
	}
	
	cout << correct << " " << total_time;
	
	return 0;
}
