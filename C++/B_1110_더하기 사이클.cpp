#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int check = n;
	
	int count(0);
	
	while(count >= 1 && n == check){
		
		int front, back, temp;
		
		if(n < 10)
			n *= 10;
			
		front = (n % 10);
		
		temp = (n / 10) + (n % 10);
		back = (temp % 10);
		
		n = (front * 10) + back;

		count++;
	}	
	
	return 0;
}
