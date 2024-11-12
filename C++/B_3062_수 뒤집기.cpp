#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	while(n--){
		
		string num;
		cin >> num;
		
		string num2 = num;
		reverse(num2.begin(), num2.end());
		
		// num과 num2를 숫자로 변환 후 더하기
        int sum = stoi(num) + stoi(num2);

        // sum을 다시 문자열로 변환하여 대칭 확인
        string sumStr = to_string(sum);
		
		bool x = true;
		for(int i = 0; i < sumStr.length()/2; i++){
			
			if(sumStr[i] != sumStr[sumStr.length()-1 - i]){
				x = false;
				break;
			}
		}
		
		if(x)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
