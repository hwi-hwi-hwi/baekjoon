#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int time[n];
	for(int i = 0; i < n; i++){
		
		cin >> time[i];
	}
	
	int chapter(0);
	int remainedTime = 30;
	
	for(int i = 0; i < n; i++){
		
		int halfTime = (time[i] + 1) / 2;
		// 절반 이상의 시간을 구하기 위해 올림 처리 
    
		if(time[i] <= remainedTime){  // 남은 시간 내에 챕터를 끝낼 수 있는 경우
			remainedTime -= time[i];
			if(time[i] >= halfTime)		chapter++;
		}
		else{  // 남은 시간 내에 챕터를 끝낼 수 없는 경우
			if(remainedTime >= halfTime)	chapter++;
			
			remainedTime -= time[i];
		}
		
		if(remainedTime <= 0)	remainedTime = 30;
	}
	
	cout << chapter;
	
	return 0;
}
