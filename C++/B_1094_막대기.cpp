#include <iostream>

using namespace std;

int main(){
	
	int x;
	cin >> x;
	
	int current_stick = 64;
	int count = 1;
	int sum = 64;
	
	while(sum > x){
		current_stick /= 2;
		
		if(sum - current_stick >= x){
			sum -= current_stick;
		}
		else{
			count++;
		}			
	}
	
	cout << count;
		
	return 0;
} 
