#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		string s;
		cin >> s;
		
		if (s.length() != 7) {
            cout << '0' << endl;
            continue;
        }
		
		if(s[0] == s[1] && s[2] == s[3] && s[4] == s[0] && s[5] == s[2] && s[5] == s[6] && s[6] == s[2] && s[6] != s[0] && s[6] == s[3])
			cout << '1' << endl;
		else
			cout << '0' << endl;
	}
		
	return 0;
}
