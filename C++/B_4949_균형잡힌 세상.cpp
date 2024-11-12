#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
	
	while(true){
		
		string input;
		getline(cin, input);  // 공백 포함 입력받기 
		
		if(input == ".")	break;
		
		stack<char> check;
		bool is_balance = true; 
		for(int i = 0; i < input.length(); i++){
			
			if(input[i] == '(' || input[i] == '['){
				check.push(input[i]);
			}
			else if(input[i] == ')'){
				if(check.empty() || check.top() != '('){
					is_balance = false;
					break;
				}
				else
					check.pop();
			}
			else if(input[i] == ']'){
				
				if(check.empty() || check.top() != '['){
					is_balance = false;
					break;
				}
				else
					check.pop();
			}
		}
		
		if(!check.empty())	is_balance = false;
		
		if(is_balance)	cout << "yes" << "\n";	
		else			cout << "no" << "\n";	
	}
	
	return 0;
}
