#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // sort
#include <functional>  // greater<int>()

using namespace std;

struct Subject{
	
	string name;
	int score;
};
int main(){
	
	int n, m, k;
	cin >> n >> m >> k;
	
	Subject input[n];
	for(int i = 0; i < n; i++){
		
		cin >> input[i].name >> input[i].score;
	}
	
	string check[k];
	for(int i = 0; i < k; i++){
		
		cin >> check[i];
	}
	
	int tmpSum(0);
	for(int i = 0; i < k; i++){
		
		for(int j = 0; j < n; j++){
			
			if(check[i] == input[j].name){
				tmpSum += input[j].score;
				break;
			}
		}
	}
	
	int maxSum = tmpSum, minSum = tmpSum;
	int count = m - k;  // 남은 과목을 채워야 하는 개수
	vector<int> remainScore;
	for(int i = 0; i < n; i++){
		
		bool checked = false;
		for(int j = 0; j < k; j++){
			
			if(input[i].name == check[j]){
				checked = true;
				break;
			}
		}
		
		if(!checked){
			remainScore.push_back(input[i].score);
		}
	}	
	// maxSum
	sort(remainScore.begin(), remainScore.end());
	for(int i = remainScore.size() - 1; i >= (int)remainScore.size() - count; i--){
		
		maxSum += remainScore[i];
	}
	// minSum
	for(int i = 0; i < count; i++){
		
		minSum += remainScore[i];
	}
	
	cout << minSum << " " << maxSum;
	
	return 0;
}
