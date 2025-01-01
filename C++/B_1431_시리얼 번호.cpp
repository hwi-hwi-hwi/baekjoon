#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>  // isdigit �Լ� 

using namespace std;

int sumOfDigits(const string& s){
	int sum = 0;
	
	for(char c : s){
		if(isdigit(c))
			sum += c - '0';
	}
	
	return sum;
}

bool compare(const string& a, const string& b){
	// 1. ���� ª�� �� ����
	if(a.length() != b.length()){
		return a.length() < b.length();
	}
	// 2. ���� ������ ���� �� ���� �� ����
	int sumA = sumOfDigits(a);
	int sumB = sumOfDigits(b);
	
	if(sumA != sumB){
		return sumA < sumB;
	}
	// 3. else -> ����������(���ڰ� ���ĺ����� �۴�) 
	return a < b;
}

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<string> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), compare);
	
	for(const string& s : v){
		cout << s << "\n";
	}
	
	return 0;
}
