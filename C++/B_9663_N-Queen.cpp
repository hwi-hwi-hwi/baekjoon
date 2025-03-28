#include <iostream>
#include <cmath>

using namespace std;

int n;
// col[row] = i 
// -> 현재 행(row)의 i번째 열(column)에 퀸을 배치
int col[15];
int ans = 0;

// Queen 놓을 수 있는지 검사하는 함수
// row(행)번째 행에 퀸을 배치했을 때, 이전 행들에 있는 퀸과 충돌하는지 검사
bool isValid(int row){
    for(int i = 0; i < row; i++){
        // 같은 열에 퀸이 있거나, 대각선에 퀸 있으면 불가능
        
        // 평면 좌표에서 두 점 (x₁, y₁)과 (x₂, y₂)가 같은 대각선에 있다면
        // 이 두 점의 기울기(slope, m) 는 항상 ±1
        // |y₂ - y₁| == |x₂ - x₁| 가 성립하면, 두 점은 같은 대각선 위에 위치

        if(col[i] == col[row] || abs(col[i] - col[row]) == abs(i - row)){
            return false;
        }
    }

    return true;
}

// backtracking 함수
void backtracking(int row){
    if(row == n){  // N개의 퀸을 모두 배치했다면
        ans++;     // 정답 카운트 증가

        return;  // 재귀 호출 종료
    }

    for(int i = 0; i < n; i++){  // 0번 열부터 N-1번 열까지 시도
        col[row] = i;  // 현재 행(row)의 i번째 열에 퀸 배치

        if(isValid(row)){  // 퀸 배치 가능하면면
            backtracking(row+1);  // 다음 행으로 이동
        }
    }
}

int main(){

    cin >> n;

    backtracking(0);

    cout << ans;
    
    return 0;
}