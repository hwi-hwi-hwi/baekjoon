#include <iostream>

using namespace std;

int main(){
	
	int x;
	cin >> x;
	
	int n;
	cin >> n;
	
	int sum(0);
	
	while(n--){
		
		int a, b;
		
		cin >> a >> b;
		
		sum += a * b;
	}
	
	if(sum == x)	cout << "Yes";
	else	cout << "No";
	
	return 0;
}
