#include <iostream>

using namespace std;

int main(){
	
	int x, y;
	cin >> x >> y;
	
	int ans;
	if(x >= y){
		ans = x + y + (y / 10);
	}
	else{
		ans = x + y + (x / 10);
	}
	
	cout << ans;
	
	return 0;
}
