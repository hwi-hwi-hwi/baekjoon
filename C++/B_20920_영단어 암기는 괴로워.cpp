#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<string, int>& a,  const pair<string, int>& b){
	
	if(a.second != b.second){
		return a.second > b.second;
	}
	
	if(a.first.length() != b.first.length()){
		return a.first.length() > b.first.length();
	}
	
	return a.first < b.first;
}

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	unordered_map<string, int> wordCount;
	while(n--){
		
		string s;
		cin >> s;
		
		if(s.length() >= m)
			wordCount[s]++;
	}
	
	vector<pair<string, int>> words(wordCount.begin(), wordCount.end());
		
	sort(words.begin(), words.end(), compare);
		
	for(auto& pair : words){
			
		cout << pair.first << "\n";
	}
		
	return 0;
}
