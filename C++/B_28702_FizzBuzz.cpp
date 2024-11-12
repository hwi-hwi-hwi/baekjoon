#include <iostream>

using namespace std;

int main(){
	
	for(int i = 0; i < 3; i++){
		
		string s;
		cin >> s;
		
		// 문자열이 Fizz 또는 Buzz일 경우 스킵 
		if(s[0] == 'F' || s[0] == 'B'){
			continue;
		}
		
		int ans = stoi(s) + 3 - i;
		
		if(ans % 3 != 0 && ans % 5 != 0){
			cout << ans;
		}
		else{
			if(ans % 3 == 0)
				cout << "Fizz";
			
			if(ans % 5 == 0)
				cout << "Buzz";
		}
		
		break;
	}
	
	return 0;
}
