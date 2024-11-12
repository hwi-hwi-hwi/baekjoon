#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;

int main(){
	
	string s;
	
	while(1){
		
		cin >> s;
		
		if(s == "#")	break;
		
		string ss = s;
		reverse(ss.begin(), ss.end());
		
		int valid = true;
		
		for(int i = 0; i < ss.length(); i++){
			
			if(ss[i] == 'b')		ss[i] = 'd';
			else if(ss[i] == 'd')		ss[i] = 'b';
			else if(ss[i] == 'p')		ss[i] = 'q';
			else if(ss[i] == 'q')		ss[i] = 'p';
			else if(ss[i] == 'i' || ss[i] == 'o' || ss[i] == 'v' || ss[i] == 'w' || ss[i] == 'x')	continue;
			else{
				valid = false;
				break;
			}
		}
		
		if(!valid)
			cout << "INVALID" << endl;
		else
			cout << ss << endl;
	}
		
	return 0;
}
