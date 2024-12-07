#include <iostream>
#include <string>
#include <map>
#include <iomanip>  // setprecision() �̿� 

using namespace std;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string input;
	map<string, int> book;
	int total = 0;
	while(getline(cin, input)){
		
		book[input]++;
		total++;
	}
	
	cout << fixed << setprecision(4);  // �Ҽ��� 4° �ڸ����� ����
	for(auto& pair : book){
		
		double percentage = (double(pair.second) / total) * 100.0;
		cout << pair.first << " " << percentage << "\n";
	}
	return 0;
}
