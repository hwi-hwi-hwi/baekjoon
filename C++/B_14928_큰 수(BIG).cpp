#include <iostream>

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	int result(0);
	int a = 20000303;
	
	for(int i = 0; i < input.length(); i++){
		
		int num = input[i] - '0';
		
		result = ((result * 10) + num) % a;
	}
	
	cout << result;
	
	return 0;
}
