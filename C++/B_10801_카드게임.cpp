#include <iostream>

using namespace std;

int main(){
	
	int aScore(0), bScore(0);
	int a[10], b[10];
	
	for(int i = 0; i < 10; i++){
		
		cin >> a[i];
	}
	
	for(int i = 0; i < 10; i++){
		
		cin >> b[i];
	}
	
	for(int i = 0; i < 10; i++){
		
		if(a[i] > b[i])		aScore++;
		else if(a[i] < b[i])	bScore++;
	}
	
	if(aScore > bScore)		cout << 'A';
	else if(aScore < bScore)	cout << 'B';
	else	cout << 'D';
	
	return 0;
}
