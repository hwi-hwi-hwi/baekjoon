#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;

    while(t--){
        // 함수 p, 배열 개수 n
        string p;
        int n;
        cin >> p >> n;

        // 숫자 덱 만들기
        string s, num = "";
        cin >> s;
        deque<int> dq;

        for(char c : s){
            if(isdigit(c)){  // 숫자인 경우
                num += c;
            }
            else if(!num.empty()){  // 각 숫자 끝난 경우
                dq.push_back(stoi(num));
                num = "";  // num 초기화
            }
        }

        // 함수 작동
        bool isError = false;
        bool isReversed = false;

        for(char cmd : p){
            if(cmd == 'R'){
                isReversed = !isReversed;  // 뒤집기
            }
            else if(cmd == 'D'){
                if(dq.empty()){
                    cout << "error" << "\n";
                    isError = true;
                    break;
                }

                if(isReversed){
                    dq.pop_back();  // 역방향 삭제
                }
                else{
                    dq.pop_front();  // 정방향 삭제
                }
            }
        }

        // error 발생 시 다음 테스트 케이스로
        if(isError)     continue;

        // 출력
        if(isReversed){
            reverse(dq.begin(), dq.end());
        }

        cout << "[";
        for(size_t i = 0; i < dq.size(); i++){
            if(i > 0){
                cout << ",";
            }
            cout << dq[i];
        }
        cout << "]" << "\n";
    }

    return 0;
}