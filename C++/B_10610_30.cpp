#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
	
	string input;
	cin >> input;
	// 10의 배수인지 
	if(input.find('0') == string::npos){
		cout << -1;
		return 0;
	}
	
	// 각 자리의 합이 3의 배수인지 
	int sum = 0;
	for(char c : input){
		sum += (c - '0');
	}
	
	if(sum % 3 != 0){
		cout << -1;
		return 0;
	}
	
	// 내림차순
	sort(input.begin(), input.end(), greater<char>());
	
	cout << input;
	
	return 0;
}
