#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n, max(0);
	char l;
	cin >> n >> l;
	
	for(int i = 1; i <= n; i++){
		
		while(to_string(++max).find(l) != string::npos);
		// max++ �� �ƴ϶� ++max��! 
	}
	
	cout << max;	
	
	return 0;
}
