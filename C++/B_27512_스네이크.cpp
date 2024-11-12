#include <iostream>

using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int s = n * m;
	if(s % 2)	cout << s-1;
	else	cout << s;
	
	return 0;
}
