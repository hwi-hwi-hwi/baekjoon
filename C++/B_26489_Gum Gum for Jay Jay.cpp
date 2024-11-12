#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int count = 0;
	string line;
	
	while(getline(cin, line)){
		
		count++;
	}
	
	cout << count << endl;
	
	return 0;
} 
