#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int a, b, c;
	cin >> a >> b >> c;
	
	int ans1 = a + b - c;
	
	string a2 = to_string(a);
	string b2 = to_string(b);
	string k = a2 + b2;
	int k2 = stoi(k);
	int ans2 = k2 - c;
	
	cout << ans1 << endl << ans2;	
	
	return 0;
}
