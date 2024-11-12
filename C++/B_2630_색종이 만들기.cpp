#include <iostream>

using namespace std;

int w_count(0), b_count(0);

void divide(int x, int y, int size, int paper[128][128]);

int main(){
	
	int n;
	cin >> n;
	
	int paper[128][128];
	
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < n; j++){
			
			cin >> paper[i][j];
		}
	}
	
	divide(0, 0, n, paper);
	
	cout << w_count << "\n";
	cout << b_count << "\n";
	
	return 0;
}

void divide(int x, int y, int size, int paper[128][128]){
	
	bool same_color = true;
	
	int color = paper[x][y];
	
	for(int i = x; i < (x + size); i++){
		
		for(int j = y; j < (y + size); j++){
			
			if(paper[i][j] != color){
				same_color = false;
				break;
			}
		}
		
		if(!same_color)		break;
	}
	
	if(same_color){
		if(color == 0)	w_count++;
		else			b_count++;
	}
	else{
		int half_size = size/2;
		
		divide(x, y, half_size, paper);
		divide(x, y+half_size, half_size, paper);
		divide(x+half_size, y, half_size, paper);
		divide(x+half_size, y+half_size, half_size, paper);
	}
}
