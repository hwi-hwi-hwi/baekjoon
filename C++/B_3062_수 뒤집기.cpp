#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	while(n--){
		
		string num;
		cin >> num;
		
		string num2 = num;
		reverse(num2.begin(), num2.end());
		
		// num�� num2�� ���ڷ� ��ȯ �� ���ϱ�
        int sum = stoi(num) + stoi(num2);

        // sum�� �ٽ� ���ڿ��� ��ȯ�Ͽ� ��Ī Ȯ��
        string sumStr = to_string(sum);
		
		bool x = true;
		for(int i = 0; i < sumStr.length()/2; i++){
			
			if(sumStr[i] != sumStr[sumStr.length()-1 - i]){
				x = false;
				break;
			}
		}
		
		if(x)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
