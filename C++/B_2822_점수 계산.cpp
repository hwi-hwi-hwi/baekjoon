#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	vector<pair<int, int>> scores;
	
	for(int i = 1; i <= 8; i++){
		int score;
		cin >> score;
		scores.push_back({score, i});
	}
	sort(scores.rbegin(), scores.rend());
	
	int sum = 0;
	vector<int> selected;
	
	for(int i = 0; i < 5; i++){
		sum += scores[i].first;
		selected.push_back(scores[i].second);
	}
	sort(selected.begin(), selected.end());
	
	cout << sum << "\n";
	for(int problem : selected)
		cout << problem << " ";
	
	return 0;
}
