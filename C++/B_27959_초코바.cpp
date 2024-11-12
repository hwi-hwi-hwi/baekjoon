#include <iostream>

using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int x = n*100;
	
	if(x >= m)	cout << "Yes";
	else		cout << "No";
	
	return 0;
}
