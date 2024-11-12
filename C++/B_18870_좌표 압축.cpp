#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> input(n);
	for(int i = 0; i < n; i++){
		
		cin >> input[i];
	}
	
	vector<int> sorted = input;
	sort(sorted.begin(), sorted.end());
	
	// unique()는 연속된 중복을 제거
	// erase()를 사용해 벡터에서 중복을 완전히 삭제
	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
	
	unordered_map<int, int> compress;
	for(int i = 0; i < sorted.size(); i++){
		
		compress[sorted[i]] = i;
	}
	
	for(int i = 0; i < n; i++){
		
		cout << compress[input[i]] << ' ';
	}
	
	return 0;
}
