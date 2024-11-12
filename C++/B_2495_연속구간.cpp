#include <iostream>

using namespace std;

int main(){
	
	string s;
	int n = 3;
	while(n--){
		
		cin >> s;
	
		int count(1);
		int max(1);
		for(int i = 0; i < 8; i++){
			
			if(s[i] == s[i+1])	count++;
			else	count = 1;
			
			if(count > max)		max = count;
		}
	
		cout << max << endl;
	}
	
	return 0;
}
