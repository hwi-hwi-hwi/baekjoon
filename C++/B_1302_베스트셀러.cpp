#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	unordered_map<string, int> book;
	while(n--){
		
		string b;
		cin >> b;
		
		book[b]++;
	}
	
	string mostBook;
	int most = 0;
	for(auto& pair : book){
		
		string bk = pair.first;
		int num = pair.second;
		
		if(num > most || (num == most && bk < mostBook)){
			most = num;
			mostBook = bk;
		}
	}
	
	cout << mostBook;	
	
	return 0;
}
