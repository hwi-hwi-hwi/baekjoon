#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	bool isMinus = false;
	string num = "";
	int ans(0);
	
	for(int i = 0; i <= input.size(); i++){
		
		if(input[i] == '+' || input[i] == '-' || i == input.size()){
			if(isMinus){
				ans -= stoi(num);
			}
			else{
				ans += stoi(num);
			}
			
			num = "";  // ���� �ʱ�ȭ
			
			if(input[i] == '-')
				isMinus = true;
		}
		else{
			num += input[i];  // ���ڸ� ���ڿ��� �̾� ����
		}
	}
	
	cout << ans;
	
	return 0;
}
