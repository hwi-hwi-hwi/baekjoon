#include <iostream>

using namespace std;

int main(){
	
	for(int i = 0; i < 3; i++){
		
		string s;
		cin >> s;
		
		// ���ڿ��� Fizz �Ǵ� Buzz�� ��� ��ŵ 
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
