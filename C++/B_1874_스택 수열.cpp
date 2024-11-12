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
	int current = 1;  // ���� ���ÿ� ���� ����
	for(int i = 0; i < n; i++){
		
		// �־��� ������ ���� ���� ������ push
		while(current <= seq[i]){
			
			stk.push(current++);
			output += "+\n";
		}
		
		// ������ top�� ������ ������ pop
		if(stk.top() == seq[i]){
			output += "-\n";
			stk.pop();
		}
		else{
			// ������ ���� �� ���� ���
			cout << "NO";
			return 0;
		}
	}
	
	cout << output;
	
	return 0;
}
