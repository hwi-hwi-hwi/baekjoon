#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>  // INT_MAX

using namespace std;

int main(){
    // 세로 n, 가로 m, 인벤토리에 있는 블록 b
    int n, m, b;
    cin >> n >> m >> b;

    vector<vector<int>> land(n, vector<int>(m));
    int minH = 256, maxH = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> land[i][j];
            minH = min(minH, land[i][j]);
            maxH = max(maxH, land[i][j]);
        }
    }

    int minTime = INT_MAX, bestH = 0;
    for(int h = minH; h <= maxH; h++){
        // 1번 작업: 2초, 2번 작업: 1초
        int removeCount = 0, addCount = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int diff = land[i][j] - h;

                if(diff > 0){
                    // 블록 제거 (2초 소요)
                    removeCount += diff;
                }
                else{
                    // 블록 추가 (1초 소요)
                    addCount -= diff;
                }
            }
        }

        // 블록이 충분한지 확인
        if(removeCount + b >= addCount){
            int time = removeCount*2 + addCount;

            // 최소 시간 갱신 + 높은 높이 선택
            if(time < minTime || (time == minTime && h > bestH)){
                minTime = time;
                bestH = h;
            }
        }
    }

    cout << minTime << " " << bestH;

    return 0;
}