#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int piece, give;
	int eat = piece - give;
	// k = 1, piece = 2, give = 1
	// k = 2, piece = 2 + 2, give = 1 + 2
	// k = 3, piece = 2 + 2 + 3, give = 1 + 2 + 3
	// -> piece = 1 + k(k + 1) / 2, give = k(K + 1) / 2
	// -> eat = piece - give = 1
	
	while(n--){
		
		cout << 1 << '\n';
	}
	
	return 0;
}
