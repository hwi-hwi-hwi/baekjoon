#include <iostream>

using namespace std;

int main(){
	
	// 술or 아침 or 저녁 -> 280
	// 술X and 점심 -> 320
	// 0~11: 아침, 12~16: 점심, 17~24: 저녁
	// S = 1 -> 술 , S = 0 -> 술X
	
	int t, s;
	cin >> t >> s;
	

	if(12 <= t && t <= 16 && s == 0)	cout << 320;
	else	cout << 280;
	
	return 0;
}
