#include <iostream>

using namespace std;

int main(){
	// C++ I/O ���� ���
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int t;
	cin >> t;
	
	while(t--){
		
		long long a, b;
		cin >> a >> b;
		
		cout << (a + b - 1) * (a + b) * (a + b) / 2 << "\n";
		// endl; -> "\n"�� �ٲٴϱ� �ð� �ʰ� �ذ��� 
	}
	
	return 0;
}
