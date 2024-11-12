#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int v;
	string input;
	int a(0), b(0);
	
	cin >> v;
	cin >> input;
	
	for(int i = 0; i < input.length(); i++){
		
		if(input[i] == 'A')
			a++;
		else if(input[i] == 'B')
			b++;
	}
	
	if(a > b)	cout << 'A';
	else if(a < b)	cout << 'B';
	else	cout << "Tie";
	
	return 0;
}
