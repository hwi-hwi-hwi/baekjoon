#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int y(0), m(0);
	
	for(int i = 0; i < n; i++){
		
		int t;
		cin >> t;
		
		y += (t / 30) * 10 + 10;
		m += (t / 60) * 15 + 15;
	}
	
	if(y < m)	cout << "Y " << y << endl;
	else if(y > m)	cout << "M " << m << endl;
	else	cout << "Y M " << y << endl;
	
	return 0;
}
