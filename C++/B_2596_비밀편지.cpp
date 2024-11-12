#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string num[8] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
	char alphabet[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	
	int n;  // ������ ����
	cin >> n;
	
	string input;  // ������ ������ ���� �� ��ŭ�� ���� �Է�
	cin >> input;
	
	bool error_found = false;
	int error_position = -1;
	string result = "";  // ����� ������ ���ڿ�
	
	for(int i = 0; i < n; i++){
		
		// 6 ���� �и� 
		string segment = input.substr(i*6, 6);
		// 6 ���� num�� ��ġ�ϴ���
		bool matched = false;
		
		for(int j = 0; j < 8; j++){
			
			int mismatch = 0;
			
			for(int k = 0; k < 6; k++){
				
				if(segment[k] != num[j][k])
					mismatch++;
			}
			
			if(mismatch <= 1){
				// 0 �Ǵ� 1�� ���̳���
				result += alphabet[j];
				matched = true;
				break; // 2 ��° for�� Ż�� ��, ���� segment 
			}
		}
		
		if(!matched){
			// 2 �� �̻� ���̳���
			error_found = true;
			error_position = i+1;
			break;  // 1 ��° for�� Ż�� 
		}	
	}
	
	if(!error_found)	cout << result;
	else	cout << error_position;
	
	return 0;
}
