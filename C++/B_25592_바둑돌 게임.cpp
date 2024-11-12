#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int taken = 0;
	int i = 1;
	
	while(taken + i <= n){
		
		taken += i;
		i++; 
	}
	
	int remain = n - taken; 
	
	if(i % 2 != 1)		cout << '0';
	else	cout << i - remain;
	
	return 0;
} 
