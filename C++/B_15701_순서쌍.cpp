#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int count = 0;
	for(int a = 1; a * a <= n; a++){
		
		if(n % a == 0){
			int b = n / a;
			
			if(a != b)	count += 2;
			else		count += 1;
		}
	}
	
	cout << count;	
	
	return 0;
}
