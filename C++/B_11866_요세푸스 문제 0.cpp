#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int n, k;
	cin >> n >> k;
	
	queue<int> que;
	for(int i = 1; i <= n; i++){
		
		que.push(i);
	}
	
	int count(0), temp, output, check(0);
	cout << '<';
	while(!que.empty()){
		
		count++;
		if(count == k){
			check++;
			
			output = que.front();
			
			if(check != n)
				cout << output << ", ";
			else
				cout << output << '>';
			que.pop();
			
			count = 0;
		}
		else{
			temp = que.front();
			que.pop();
			que.push(temp);
		}
	}
	
	return 0;
}
