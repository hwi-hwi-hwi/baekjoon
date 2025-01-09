#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		vector<pair<int, int>> applicants(n);
		for(int i = 0; i < n; i++){
			cin >> applicants[i].first >> applicants[i].second;
		}
		sort(applicants.begin(), applicants.end());
		
		int maxHires = 1;  // 첫 번째 지원자는 무조건 선발
		int minInterviewRank = applicants[0].second;
		
		for(int i = 1; i < n; i++){
			if(applicants[i].second < minInterviewRank){
				maxHires++;
				minInterviewRank = applicants[i].second;
			}
		}
		
		cout << maxHires << "\n";
	}
		
	return 0;
}
