#include <iostream>

using namespace std;

int main(){
	
	// ��or ��ħ or ���� -> 280
	// ��X and ���� -> 320
	// 0~11: ��ħ, 12~16: ����, 17~24: ����
	// S = 1 -> �� , S = 0 -> ��X
	
	int t, s;
	cin >> t >> s;
	

	if(12 <= t && t <= 16 && s == 0)	cout << 320;
	else	cout << 280;
	
	return 0;
}
