#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int	l;
	cin >> l;
	
	vector<int> s(l);
	for(int i = 0; i < l; i++){
		
		cin >> s[i];
	}
	s.push_back(0);
	
	sort(s.begin(), s.end());
	
	int n;
	cin >> n;
	
	if(find(s.begin(), s.end(), n) != s.end()){
		cout << '0';
		
		return 0;
	}
	
	int left, right;
	bool is_good = true;
	
	for(int i = 1; i < l+1; i++){
		
		if(n == s[i])
			is_good = false;
		else if(n < s[i]){
			left = s[i-1] + 1;
			right = s[i] - 1;
			break;
		}
	}
	
	int ans = (n-left) * (right-n+1) + (right - n);
	if(is_good)
		cout << ans;
	else
		cout << '0';	
	
	return 0;
}
