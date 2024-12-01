#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	priority_queue<int, vector<int>, greater<int>> minHeap;
	
	while(n--){
		
		int x;
		cin >> x;
		
		if(x >= 1){
			minHeap.push(x);
		}
		else if(x == 0){
			if(minHeap.empty())
				cout << 0 << "\n";
			else{
				cout << minHeap.top() << "\n";
				minHeap.pop();
			}
		}
	}
	
	return 0;
}
