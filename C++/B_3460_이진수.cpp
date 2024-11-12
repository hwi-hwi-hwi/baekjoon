#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		int count(0);
		
		while(n){
			
			if(n % 2 == 1){
				n /= 2;
				cout << count << " ";
			}
			else if(n % 2 == 0){
				n /= 2;
			}
			
			count++;
		}
		
		cout << endl;
	}
	
	return 0;
}
