#include <iostream>
#include <string>

using namespace std;

int main(){
	
	// string으로 문자열 선언
	string s = "SciComLove";
	
	int n;
	cin >> n;
	
	int x = n % 10;
	int count = 0;
	
	// 순환하면서 문자 출력
	for(int i = x; count < 10; i++){
		
		cout << s[i];
		if(i >= 9)	i = -1;  // 문자열의 끝에 도달하면 처음으로 돌아감
		
		count++;
	}
	
	return 0;
}

