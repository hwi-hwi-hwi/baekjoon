#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<long long> num;
	for(int i = 0; i < n; i++){
		string input;
		cin >> input;
		
		reverse(input.begin(), input.end());
		
		long long reverseNum = stoll(input);
		
		num.push_back(reverseNum);
	}
	sort(num.begin(), num.end());
	
	for(long long x : num){
		cout << x << "\n";
	}
	
	return 0;
}
