#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	stack<int> stk;
	string input;
	while(n--){
		
		int temp;
		cin >> input;
		
		if(input == "push"){
			cin >> temp;
			stk.push(temp);
		}
		else if(input == "pop"){
			if(!stk.empty()){
				temp = stk.top();
				stk.pop();
				cout << temp << endl;
			}
			else
				cout << "-1" << endl;
		}
		else if(input == "size"){
			temp = stk.size();
			cout << temp << endl;
		}
		else if(input == "empty"){
			if(stk.empty())
				cout << '1' << endl;
			else
				cout << '0' << endl;
		}
		else if(input == "top"){
			if(!stk.empty()){
				temp = stk.top();
				cout << temp << endl;
			}
			else
				cout << "-1" << endl;
		}
	}
	
	return 0;
}
