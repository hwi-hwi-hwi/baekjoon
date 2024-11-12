#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string wb[8] = {
	"WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string bw[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"	
};

string board[51];

int count_repaints(int, int, string[8]);

int main(){
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		
		cin >> board[i];
	}
	
	int min_repaints = 64;
	for(int i = 0; i <= n-8; i++){  // 8x8 시작 위치
	
		for(int j = 0; j <= m-8; j++){
			
			int wb_repaints = count_repaints(i, j, wb);
			int bw_repaints = count_repaints(i, j, bw);
			
			min_repaints = min(min_repaints, min(wb_repaints, bw_repaints));
		}
	}
	
	cout << min_repaints;
	
	return 0;
}

int count_repaints(int startX, int startY, string pattern[8]){
	
	int count(0);
	for(int i = 0; i < 8; i++){
		
		for(int j = 0; j < 8; j++){
			
			if(board[startX + i][startY + j] != pattern[i][j])
				count++;
		}
	}
	
	return count;
}
