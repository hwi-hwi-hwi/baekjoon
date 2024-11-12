#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int R, C;
	cin >> R >> C;
	
	int Rg, Cg, Rp, Cp;
	cin >> Rg >> Cg >> Rp >> Cp;
	
	vector<string> room(R);
	for(int i = 0; i < R; i++){
		
		cin >> room[i];
	}
	
	int count(0);
	for(int i = 0; i < R; i++){
		
		for(int j = 0; j < C; j++){
			
			if(room[i][j] == 'P')	count++;
		}
	}
	
	if(count == Rp * Cp)	cout << '0';
	else	cout << '1';	
	
	return 0;
}
