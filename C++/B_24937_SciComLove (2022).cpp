#include <iostream>
#include <string>

using namespace std;

int main(){
	
	// string���� ���ڿ� ����
	string s = "SciComLove";
	
	int n;
	cin >> n;
	
	int x = n % 10;
	int count = 0;
	
	// ��ȯ�ϸ鼭 ���� ���
	for(int i = x; count < 10; i++){
		
		cout << s[i];
		if(i >= 9)	i = -1;  // ���ڿ��� ���� �����ϸ� ó������ ���ư�
		
		count++;
	}
	
	return 0;
}

