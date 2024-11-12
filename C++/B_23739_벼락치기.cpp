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
		// ���� �̻��� �ð��� ���ϱ� ���� �ø� ó�� 
    
		if(time[i] <= remainedTime){  // ���� �ð� ���� é�͸� ���� �� �ִ� ���
			remainedTime -= time[i];
			if(time[i] >= halfTime)		chapter++;
		}
		else{  // ���� �ð� ���� é�͸� ���� �� ���� ���
			if(remainedTime >= halfTime)	chapter++;
			
			remainedTime -= time[i];
		}
		
		if(remainedTime <= 0)	remainedTime = 30;
	}
	
	cout << chapter;
	
	return 0;
}
