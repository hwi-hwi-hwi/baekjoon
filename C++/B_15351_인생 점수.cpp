#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;

	// 줄바꿈 문자를 무시하여
	// 다음 getline이 올바르게 동작하도록 함
	cin.ignore();
		
	for(int i = 0; i < n; i++){
		
		string input;
		int score(0);
		
		// getline(cin, line)을 사용하는 이유: 
		// 입력된 문자열에 공백(띄어쓰기)이 포함될 수 있기 때문
		// cin은 공백이나 줄바꿈 문자를 기준으로 입력을
		// 분리하여 읽기 때문에, 공백이 포함된 문자열을
		// 한 번에 입력받을 수 없음 
		getline(cin, input);
		
		for(char ch : input){
			
			if('A' <= ch && ch <= 'Z')
				score += ch - 'A' + 1;
		}
		
		
		if(score == 100)	cout << "PERFECT LIFE" << endl;
		else	cout << score << endl;
	}
	
	return 0;
}
