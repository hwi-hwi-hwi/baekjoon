#include <iostream>
#include <vector>

using namespace std;

// 26개의 방향을 나타내는 배열
const int dx[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1};
const int dy[] = {1, 1, 1, 0, 0, 0, -1, -1, -1, 1, 1, 1, 0, 0, -1, -1, -1, 1, 1, 1, 0, 0, 0, -1, -1, -1};
const int dz[] = {1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1, 1, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1};

int main(){
	
    int R, C, H;
    cin >> R >> C >> H;
    
    vector<vector<vector<char>>> mine(H, vector<vector<char>>(R, vector<char>(C)));
    vector<vector<vector<int>>> answer(H, vector<vector<int>>(R, vector<int>(C, 0)));

    // 입력 읽기
    for (int h = 0; h < H; ++h) {
    	
        for (int r = 0; r < R; ++r) {
        	
            for (int c = 0; c < C; ++c) {
            	
                cin >> mine[h][r][c];
            }
        }
    }

    // 지뢰 개수 계산
    for (int h = 0; h < H; ++h) {
    	
        for (int r = 0; r < R; ++r) {
        	
            for (int c = 0; c < C; ++c) {
            	
                if (mine[h][r][c] == '*') {
                    answer[h][r][c] = '*';
                    continue;
                }
                
                int count = 0;
                for (int k = 0; k < 26; ++k) {
                	
                    int nh = h + dz[k];
                    int nr = r + dy[k];
                    int nc = c + dx[k];

                    if (nh < 0 || nh >= H || nr < 0 || nr >= R || nc < 0 || nc >= C) continue;
                    
					if (mine[nh][nr][nc] == '*') {
                        count++;
                    }
                }
                
                answer[h][r][c] = count % 10;
            }
        }
    }

    for (int h = 0; h < H; ++h) {
        for (int r = 0; r < R; ++r) {
            for (int c = 0; c < C; ++c) {
                if (answer[h][r][c] == '*') {
                    cout << '*';
                } else {
                    cout << answer[h][r][c];
                }
            }
            cout << '\n';
        }
    }
    
    return 0;
}
