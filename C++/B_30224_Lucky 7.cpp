#include <iostream>
#include <string> 

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	// ���ڿ��� ����(int)�� ����ȯ -> stoi �Լ�
	int num = stoi(input); 
	
	// ���ڿ�.find("ã�� ����") 
	if(input.find("7") != string::npos){
		// 7�� ���ԵǾ� ���� ��� 
		if(num % 7 == 0)	cout << 3;
		else	cout << 2; 
	}
	else{
		// 7�� ���ԵǾ� ���� ���� ��� 
		if(num % 7 == 0)	cout << 1;
		else	cout << 0;
	}
	
	return 0;
}
