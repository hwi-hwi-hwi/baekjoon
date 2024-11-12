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
			i++;  // �ߺ� ���� 
			if(pattern_count == n){
				ans++;  // PN �߰� 
				pattern_count--;  // ���� ������ ���� �ʱ�ȭ
			}
		}
		else{
			pattern_count = 0;  // ���ӵ� "IOI" ������ �ƴϸ� �ʱ�ȭ
		}
	}
	
	cout << ans;
	
	return 0;
}
