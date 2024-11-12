#include <iostream>

using namespace std;

int main(){
	
	string input;
	getline(cin, input);
	
	int a, b;
	
	if(input.length() == 3){
		if(input[1] == '0'){
			a = (input[0] - '0') * 10;
			b = input[2] - '0';
		}
		else if(input[2] == '0'){
			a = input[0] - '0';
			b = (input[1] - '0') * 10;
		}
	}
	else if(input.length() == 4){
		a = (input[0] - '0') * 10;
		b = (input[2] - '0') * 10;
	}
	else{
		a = input[0] - '0';
		b = input[1] - '0';
	}
	
	cout << a + b;	
	
	return 0;
}
