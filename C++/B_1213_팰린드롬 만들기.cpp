#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	int alpha[26] = {0};
	for(char c : input){
		
		alpha[c - 'A']++;
	}
	
	int odd_count(0);
	char odd_char = 0;
	string half = "";
	for(int i = 0; i < 26; i++){
		
		if(alpha[i] % 2 == 1){
			odd_count++;
			odd_char = 'A' + i;
		}
		
		half += string(alpha[i]/2, 'A'+i);
	}
	
	if(odd_count > 1){
		cout << "I'm Sorry Hansoo";
		return 0;
	}
	
	string result = half;
	
	if(odd_char != 0)
		result += odd_char;
	
	result += string(half.rbegin(), half.rend());
	
	cout << result;
	
	return 0;
}
