#include <iostream>

using namespace std;

int main(){
	
	int a, b, c, ans(0), max(0);
	cin >> a >> b >> c;
	
	if(a == b){
		if(b == c){
			ans += 10000 + (a * 1000);
		}
		else if(b != c){
			ans += 1000 + (a * 100);
		}
	}
	else if(a != b){
		if(b == c){
			ans += 1000 + (b * 100);
		}
		else if(c == a && c != b){
			ans += 1000 + (c * 100);
		}
		else if(c != b && c != a){
			if(a > max)		max = a;
			if(b > max)		max = b;
			if(c > max)		max = c;
			
			ans += max * 100;
		}
		
	}
	
	cout << ans;
	
	return 0;
}
