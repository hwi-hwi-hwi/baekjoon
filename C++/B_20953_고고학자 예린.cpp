#include <iostream>

using namespace std;

int main(){
	// C++ I/O 성능 향상
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int t;
	cin >> t;
	
	while(t--){
		
		long long a, b;
		cin >> a >> b;
		
		cout << (a + b - 1) * (a + b) * (a + b) / 2 << "\n";
		// endl; -> "\n"로 바꾸니까 시간 초과 해결함 
	}
	
	return 0;
}
