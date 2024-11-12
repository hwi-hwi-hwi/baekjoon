#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int n;
		cin >> n;
		
		int score1(0), score2(0);
		while(n--){
			
			char p1, p2;
			cin >> p1 >> p2;
			
			if(p1 == 'R'){
				if(p2 == 'R')
					continue;
				else if(p2 == 'S')
					score1++;
				else if(p2 == 'P')
					score2++;
			}
			else if(p1 == 'S'){
				if(p2 == 'S')
					continue;
				else if(p2 == 'R')
					score2++;
				else if(p2 == 'P')
					score1++;
			}
			else if(p1 == 'P'){
				if(p2 == 'P')
					continue;
				else if(p2 == 'R')
					score1++;
				else if(p2 == 'S')
					score2++;
			}
		}
		
		if(score1 > score2)			cout << "Player 1" << "\n";
		else if(score1 < score2)	cout << "Player 2" << "\n";
		else						cout << "TIE" << "\n";
	}
	
	return 0;
}
