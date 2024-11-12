#include <iostream>

using namespace std;

int main(){
	
	int a, b, i = 1;
	string s;
	
	while(1){
		
		cin >> a >> s >> b;
		
		if(s == "E")	break;
		
		cout << "Case " << i << ": ";
		if(s == ">"){
			if(a > b)	cout << "true";
			else	cout << "false";
		}
		else if(s == ">="){
			if(a >= b)	cout << "true";
			else	cout << "false";
		}
		else if(s == "<"){
			if(a < b)	cout << "true";
			else	cout << "false";
		}
		else if(s == "<="){
			if(a <= b)	cout << "true";
			else	cout << "false";
		}
		else if(s == "=="){
			if(a == b)	cout << "true";
			else	cout << "false";
		}
		else if(s == "!="){
			if(a != b)	cout << "true";
			else	cout << "false";
		}
		
		cout << endl;
		i++;
	}
	
	return 0;
}
