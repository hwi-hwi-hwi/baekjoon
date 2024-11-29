#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	deque<int> dq;
	
	while(n--){
		
		string s;
		cin >> s;
		
		if(s == "push_front"){
			int x;
			cin >> x;
			dq.push_front(x);
		}
		else if(s == "push_back"){
			int x;
			cin >> x;
			dq.push_back(x);
		}
		else if(s == "pop_front"){
			if(dq.empty())
				cout << "-1\n";
			else{
				int temp = dq.front();
				dq.pop_front();
				cout << temp << "\n";
			} 
		}
		else if(s == "pop_back"){
			if(dq.empty())
				cout << "-1\n";
			else{
				int temp = dq.back();
				dq.pop_back();
				cout << temp << "\n";
			}
		}
		else if(s == "size"){
			cout << dq.size() << "\n";
		}
		else if(s == "empty"){
			if(dq.empty())
				cout << 1 << "\n";
			else
				cout << "0\n";
		}
		else if(s == "front"){
			if(dq.empty())
				cout << "-1\n";
			else
				cout << dq.front() << "\n";
		}
		else if(s == "back"){
			if(dq.empty())
				cout << "-1\n";
			else
				cout << dq.back() << "\n";
		}
	}
	
	return 0;
}
