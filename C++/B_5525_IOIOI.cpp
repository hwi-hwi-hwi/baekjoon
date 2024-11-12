#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int m;
	cin >> m;
	
	string s;
	cin >> s;
	
	int ans = 0;
	int pattern_count = 0;
	
	for(int i = 1; i < m-1; i++){
		
		if(s[i-1] == 'I' && s[i] == 'O' && s[i+1] == 'I'){
			pattern_count++;
			i++;  // 중복 방지 
			if(pattern_count == n){
				ans++;  // PN 발견 
				pattern_count--;  // 다음 패턴을 위해 초기화
			}
		}
		else{
			pattern_count = 0;  // 연속된 "IOI" 패턴이 아니면 초기화
		}
	}
	
	cout << ans;
	
	return 0;
}
