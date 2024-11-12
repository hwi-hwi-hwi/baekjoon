#include <iostream>

using namespace std;

int main(){
	
	int n;
	while(cin >> n){
		
		int digit = 0;
		int remainder = 0;
		while(1){
			
			digit++;
			remainder = ((remainder*10) + 1) % n;
			
			if(!remainder){
				break;
			}
		}
		
		cout << digit << "\n";
	}
	
	return 0;
}
