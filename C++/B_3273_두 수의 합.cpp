#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> input(n);
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	
	int x;
	cin >> x;
	
	unordered_set<int> num;
	int count = 0;
	
	for(int k : input){
		int target = x - k;
		
		if(num.count(target))	count++;
		
		num.insert(k);
	}
	
	cout << count;
	
	return 0;
}
