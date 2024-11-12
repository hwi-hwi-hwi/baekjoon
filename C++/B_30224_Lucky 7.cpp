#include <iostream>
#include <string> 

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	// 문자열을 숫자(int)로 형변환 -> stoi 함수
	int num = stoi(input); 
	
	// 문자열.find("찾는 문자") 
	if(input.find("7") != string::npos){
		// 7이 포함되어 있을 경우 
		if(num % 7 == 0)	cout << 3;
		else	cout << 2; 
	}
	else{
		// 7이 포함되어 있지 않은 경우 
		if(num % 7 == 0)	cout << 1;
		else	cout << 0;
	}
	
	return 0;
}
