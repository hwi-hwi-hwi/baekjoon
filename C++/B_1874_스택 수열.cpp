#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int seq[n];
	for(int i = 0; i < n; i++){
		
		cin >> seq[i];
	}
	
	stack<int> stk;
	string output = "";
	int current = 1;  // 현재 스택에 넣을 숫자
	for(int i = 0; i < n; i++){
		
		// 주어진 수열의 값과 맞출 때까지 push
		while(current <= seq[i]){
			
			stk.push(current++);
			output += "+\n";
		}
		
		// 스택의 top과 수열이 맞으면 pop
		if(stk.top() == seq[i]){
			output += "-\n";
			stk.pop();
		}
		else{
			// 수열을 만들 수 없는 경우
			cout << "NO";
			return 0;
		}
	}
	
	cout << output;
	
	return 0;
}
