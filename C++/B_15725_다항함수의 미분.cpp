#include <iostream>
#include <string>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string fx;
	cin >> fx;
	
	int x_index = -1;
	for(int i = 0; i < fx.length(); i++){
		if(fx[i] == 'x')
			x_index = i;
	}
	
	if(x_index == -1)
		cout << 0;
	else{
		if(x_index == 0)
			cout << 1;
		else if(fx[x_index-1] == '-')
			cout << -1;
		else
			cout << stoi(fx.substr(0, x_index));
	}
	
	return 0;
}
