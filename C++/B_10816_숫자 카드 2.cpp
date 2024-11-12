#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> cards;
	int temp;
	for(int i = 0; i < n; i++){
		
		cin >> temp;
		cards.push_back(temp);
	}
	sort(cards.begin(), cards.end());
	
	int m;
	cin >> m;
	
	vector<int> check(m);
	for(int i = 0; i < m; i++){
		
		cin >> check[i];
	}
	
	for(int i = 0; i < m; i++){
		
		int lower = lower_bound(cards.begin(), cards.end(), check[i]) - cards.begin();
		int upper = upper_bound(cards.begin(), cards.end(), check[i]) - cards.begin();
		
		cout << upper - lower << ' ';
	}
	
	return 0;
}
