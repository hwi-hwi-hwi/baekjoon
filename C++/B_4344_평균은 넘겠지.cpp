#include <iostream>

using namespace std;

int main(){
	
	int c;
	cin >> c;
	
	while(c--){
		
		int n;
		cin >> n;
		
		int sum(0), avg, score[n];
		
		for(int i = 0; i < n; i++){
			
			cin >> score[i];
			sum += score[i];
		}
		
		avg = sum / n;
		

		int count(0);
		for(int i = 0; i < n; i++){
			
			if(score[i] > avg)
				count++;
		}
		float per = (float)count / n * 100;
		
		cout.precision(3);  // 소수점 이하 3자리까지 출력
		cout << fixed << per << "%" << endl;
	} 
	
	return 0;
}
