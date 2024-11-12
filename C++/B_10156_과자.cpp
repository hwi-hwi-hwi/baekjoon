#include <iostream>

using namespace std;

int main(){
	
	int k, n, m;
	cin >> k >> n >> m;
	
	int need = k * n;
	
	if(need <= m)
		cout << '0';
	else
		cout << need - m;
		
	return 0;
}
