#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

bool isValid(const vector<int>& tree, int h, int m){
	long long total = 0;
	
	for(int t : tree){
		if(t > h){
			total += t - h;
		}
		if(total >= m)	return true;
	}
	
	return total >= m;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> tree(n);
	for(int i = 0; i < n; i++){
		cin >> tree[i];
	}
	
	int left = 0;
	int right = *max_element(tree.begin(), tree.end());
	int ans = 0;
	
	while(left <= right){
		int mid = left + (right - left)/2;
		
		if(isValid(tree, mid, m)){
			ans = mid;
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	
	cout << ans;
	
	return 0;
}
