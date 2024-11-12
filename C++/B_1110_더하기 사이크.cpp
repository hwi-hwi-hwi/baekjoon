#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int check = n;
	int count = 0;
	
	do{
		
		int front, back;
		
		front = (n % 10);
		
		back = ((n / 10) + (n % 10)) % 10;
		
		n = (front * 10) + back;

		count++;
	}
	while(n != check);
	
	cout << count;
	 
	return 0;
}
