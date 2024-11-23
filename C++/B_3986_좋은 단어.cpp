#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	int count(0);
	
	while(t--){
		
		string input;
		cin >> input;
		
		stack<char> stk;
		for(char c : input){
			
			if(!stk.empty() && stk.top() == c)
				stk.pop();
			else
				stk.push(c);
		}
		
		if(stk.empty())
			count++;
	}
	
	cout << count;
	
	return 0;
}
