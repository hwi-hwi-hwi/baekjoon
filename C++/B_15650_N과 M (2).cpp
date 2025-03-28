#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> sequence;

void backtracking(int start){
    if(sequence.size() == static_cast<size_t>(m)){
        for(int num : sequence){
            cout << num << " ";
        }
        cout << "\n";

        return;  // 현재 실행 중인 함수 종료 -> 바로 이전 호출된 함수로 돌아감 (즉, 재귀 호출이 발생했던 직전 상태로 되돌아 감)
    }

    for(int i = start; i <= n; i++){  // start부터 N까지 숫자 선택
        sequence.push_back(i);  // 현재 숫자 추가
        backtracking(i+1);  // 다음 숫자는 i보다 큰 값만 선택 (오름차순)
        sequence.pop_back();  // 백트래킹 (원래 상태로 되돌림)
    }
}

int main(){
    cin >> n >> m;

    backtracking(1);
    
    return 0;
}