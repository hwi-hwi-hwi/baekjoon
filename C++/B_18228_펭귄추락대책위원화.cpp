#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int force[n];
	int left(1000000000), right(1000000000), penguin;
	for(int i = 0; i < n; i++){
		
		cin >> force[i];
		if(force[i] == -1)	penguin = i;
	}
	
	for(int i = 0; i < penguin; i++){
		
		if(force[i] < left)		left = force[i];
	}
	for(int i = penguin+1; i < n; i++){
		
		if(force[i] < right)	right = force[i];
	}
	
	int sum = left+right;
	cout << sum;
	
	return 0;
}
