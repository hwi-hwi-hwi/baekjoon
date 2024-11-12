#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int line = 1;
	
	// 몇 번째 대각선인지 찾기 
	while(n - line > 0){
		
		n -= line;
		line++;
	}
	
	// line이 홀수면 우상향, 짝수면 좌히향
	int num = n;
	if(line % 2 != 0){
		cout << line+1 - num << "/" << num;
	}
	else{
		cout << num << "/" << line+1 - num;
	}
	
	return 0;
}
