#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	int k;
	cin >> k;
	
	queue<int> que;
	
	while(k--){
		
		string input;
		int n;
		
		cin >> input;
		if(input == "push"){
			cin >> n;
			
			que.push(n);
		}
		else if(input == "pop"){
			if(que.size() == 0)
				cout << "-1" << endl;
			else{
				cout << que.front() << endl;
				que.pop();	
			}
		}
		else if(input == "size"){
			cout << que.size() << endl;
		}
		else if(input == "empty"){
			if(que.size() == 0)
				cout << '1' << endl;
			else
				cout << '0' << endl;
		}
		else if(input == "front"){
			if(que.size() == 0)
				cout << "-1" << endl;
			else
				cout << que.front() << endl;
		}
		else if(input == "back"){
			if(que.size() == 0)
				cout << "-1" << endl;
			else
				cout << que.back() << endl;
		}
	}
	
	return 0;
}
