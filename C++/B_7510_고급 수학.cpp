#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	int i = 1;
	while(t--){
		
		int a, b, c;
		cin >> a >> b >> c;
		
		cout << "Scenario #" << i << ':' << endl;
		i++;
		
		if(pow(a,2) + pow(b,2) == pow(c,2)
		|| pow(b,2) + pow(c,2) == pow(a,2)
		|| pow(c,2) + pow(a,2) == pow(b,2)){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
		
		cout << endl;
	}
	
	
	return 0;
}
