#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int line = 1;
	
	// �� ��° �밢������ ã�� 
	while(n - line > 0){
		
		n -= line;
		line++;
	}
	
	// line�� Ȧ���� �����, ¦���� ������
	int num = n;
	if(line % 2 != 0){
		cout << line+1 - num << "/" << num;
	}
	else{
		cout << num << "/" << line+1 - num;
	}
	
	return 0;
}
