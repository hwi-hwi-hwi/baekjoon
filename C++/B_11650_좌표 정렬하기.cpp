#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);  // C 표준 입출력과의 동기화를 끊음
	cin.tie(nullptr);  // cin과 cout의 묶음을 풀어서 성능 향상
	
	int n;
	cin >> n;
	
	vector<pair<int, int>> points(n);
	
	for(int i = 0; i < n; i++){
		
		cin >> points[i].first >> points[i].second;
	}
	
	sort(points.begin(), points.end());
	
	for(int i = 0; i < n; i++){
		
		cout << points[i].first << " " << points[i].second << "\n";
	}
	
	return 0;
}
