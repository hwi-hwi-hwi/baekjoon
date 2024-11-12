#include <iostream>

using namespace std;

int main(){
	
	int score[9];
	int max_score[9] = {100, 100, 200, 200, 300, 300, 400, 400, 500};
	int total(0);
	bool is_hacker = false;
	
	for(int i = 0; i < 9; i++){
		
		cin >> score[i];
		
		if(score[i] > max_score[i])
			is_hacker = true;
			
		total += score[i];
	}
	
	if(is_hacker)
		cout << "hacker";
	else if(100 <= total && total <= 2500)
		cout << "draw";
	else
		cout << "none";
	
	return 0;
}
