#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string n;
	int m;
	
	// 큰 숫자를 문자열로 입력받음
	cin >> n >> m;
	
	string ans;
	int remainder(0);
	
	for(int i = 0; i < n.length(); i++){
		
		int current = (remainder * 10) + (n[i] - '0');
		ans += (current / m) + '0';
		remainder = current % m;
	}
	
	
	return 0;
}
