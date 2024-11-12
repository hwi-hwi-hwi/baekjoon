#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main(){
	
	ios::sync_with_stdio(false); // C++�� ����°� C ��Ÿ�� ������� ����ȭ�� ��Ȱ��ȭ�Ͽ� ����� �ӵ��� ����
    cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� �� ������ ����
    
	int n;
	cin >> n;
	
	unordered_set<int> input;
	for(int i = 0; i < n; i++){
		
		int value;
		cin >> value;
		input.insert(value);
	}
	
	int m;
	cin >> m;
	
	vector<int> check(m);
	for(int i = 0; i < m; i++){
		
		cin >> check[i];
	}
	
	for(int i = 0; i < m; i++){
		
		if(input.find(check[i]) != input.end())
			cout << '1' << '\n';
		else
			cout << '0' << '\n';
	}
	
	return 0;
}
