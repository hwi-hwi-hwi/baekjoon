#include <iostream>

using namespace std;

int main(){
	
	int n, f;
	cin >> n >> f;
	
	n = n / 100 * 100;
	
	for(int i = 0; i < 100; i++){
		
		int temp = n + i;
		
		if(temp % f == 0){
			if(i < 10){
				cout << '0' << i;
			}
			else
				cout << i;
			
			return 0;
		}
	}
}
