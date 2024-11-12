#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);  // C ǥ�� ����°��� ����ȭ�� ����
	cin.tie(nullptr);  // cin�� cout�� ������ Ǯ� ���� ���
	
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
