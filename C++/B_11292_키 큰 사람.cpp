#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct student{
	
	string name;
	float height;
};

int main(){
	
	while(true){
		
		int n;
		cin >> n;
		if(n == 0)	break;
		
		vector<student> students(n);
		for(int i = 0; i < n; ++i){
			
			cin >> students[i].name >> students[i].height;
		}
		
		float maxHeight = -1;
		for(const auto& student : students){
			
			if(student.height > maxHeight){
				maxHeight = student.height;
			}
		}
		
		for(const auto& student : students){
			
			if(student.height == maxHeight){
				cout << student.name << " ";
			}
		}
		
		cout << endl;
	}
	
	return 0;
}
