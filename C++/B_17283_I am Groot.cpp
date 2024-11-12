#include <iostream>

using namespace std;

int main(){
	
	int l, r;
	cin >> l >> r;
	
	int sum(0);
	int currentLength = l * r / 100;
	int branchCount = 2;
	
	while(currentLength > 5){
		
		sum += currentLength * branchCount;
		
		currentLength = currentLength * r / 100;
		branchCount *=2;
	}
	
	cout << sum;
	
	return 0;
}
