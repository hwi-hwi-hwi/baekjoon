#include <iostream>

using namespace std;

int main(){
	
	int max = 0;
	string ans;
	int n = 7 ;
	while(n--){
		
		int a;
		string s;
		cin >> s >> a;
		
		if(a > max){
			max = a;
			ans = s;
		}
	}
	
	cout << ans;
	
	return 0;
}
