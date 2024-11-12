#include <iostream>
#include <string>  // to_string, stoi
#include <algorithm>  // reverse, max

using namespace std;

int main(){
	
	int n, k;
	cin >> n >> k;
	
	int answer(0);
	
	for(int i = 1; i <= k; i++){
		
		// i ��N�� ���ڿ��� ��ȯ
		string multip  = to_string((i*n));
		// ���ڿ� multip�� ������
		reverse(multip.begin(), multip.end());
		// ������ ���ڿ� multip�� ������ ��ȯ
		int temp = stoi(multip);
		// answer�� tmp �� ū ���� answer�� ����
		answer = max(answer, temp);
	}
	
	cout << answer; 
	
	
	return 0;
}
