#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	string input;
	cin >> input;
	
	vector<int> x;
	for(int i = 0; i < input.length(); i++){
		
		int temp = input[i] - '0';
		x.push_back(temp);
	}
	
	sort(x.begin(), x.end());
	
	for(int i = (x.size() - 1); i >= 0; i--){
		
		cout << x.at(i);
	}
	
	return 0;
}
