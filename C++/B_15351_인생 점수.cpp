#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;

	// �ٹٲ� ���ڸ� �����Ͽ�
	// ���� getline�� �ùٸ��� �����ϵ��� ��
	cin.ignore();
		
	for(int i = 0; i < n; i++){
		
		string input;
		int score(0);
		
		// getline(cin, line)�� ����ϴ� ����: 
		// �Էµ� ���ڿ��� ����(����)�� ���Ե� �� �ֱ� ����
		// cin�� �����̳� �ٹٲ� ���ڸ� �������� �Է���
		// �и��Ͽ� �б� ������, ������ ���Ե� ���ڿ���
		// �� ���� �Է¹��� �� ���� 
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
