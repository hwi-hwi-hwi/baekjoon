#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> rope(n);
	for(int i = 0 ; i < n; i++){
		cin >> rope[i];
	}
	sort(rope.begin(), rope.end());
	
	int maxW = 0;
	for(int i = 0; i < n; i++){
		int w = rope[i] * (n-i);
		
		maxW = max(maxW, w);
	}
	
	cout << maxW;
	
	return 0;
}
