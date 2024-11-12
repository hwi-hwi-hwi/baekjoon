#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b);

int main(){
	
	int n;
	cin >> n;
	
	vector<pair<int, int>> p;
	for(int i = 0; i < n; i++){
		
		int x, y;
		cin >> x >> y;
		
		p.push_back(make_pair(x, y));
	}
	sort(p.begin(), p.end(), cmp);
	
	for(int i = 0; i < n; i++){
		
		cout << p[i].first << ' ' << p[i].second << "\n";
	}
	
	
	return 0;
}

bool cmp(pair<int, int> a, pair<int, int> b){
	
	if(a.second == b.second)
		return a.first < b.first;  // 두 번째 값이 같으면 첫 번째 값으로 비교
	else
		return a.second < b.second;  // 두 번째 값이 같으면 첫 번째 값으로 비교
}
