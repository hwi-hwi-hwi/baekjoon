#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	bool isMinus = false;
	string num = "";
	int ans(0);
	
	for(int i = 0; i <= input.size(); i++){
		
		if(input[i] == '+' || input[i] == '-' || i == input.size()){
			if(isMinus){
				ans -= stoi(num);
			}
			else{
				ans += stoi(num);
			}
			
			num = "";  // 숫자 초기화
			
			if(input[i] == '-')
				isMinus = true;
		}
		else{
			num += input[i];  // 숫자를 문자열로 이어 붙임
		}
	}
	
	cout << ans;
	
	return 0;
}
