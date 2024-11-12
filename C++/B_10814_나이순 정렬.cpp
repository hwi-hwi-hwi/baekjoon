#include <iostream>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;

struct Imfo{
	
	int age;
	string name;
	int index;  // 가입 순서를 저장할 필드
};

bool compare(const Imfo &a, const Imfo &b){
	
	if(a.age == b.age)	return a.index < b.index;
	
	return a.age < b.age;
}

int main(){
	
	int n;
	cin >> n;
	
	Imfo member[n];
	
	for(int i = 0; i < n; i++){
		
		cin >> member[i].age >> member[i].name;
		member[i].index = i;
	}
	
	sort(member, member + n, compare);
	
	for(int i = 0; i < n; i++){
		
		cout << member[i].age << " " << member[i].name << endl;
	}
	
	return 0;
}
