#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

class AbsCompare {
    public:
        bool operator()(int a, int b){
            if(abs(a) == abs(b)){  // 절댓값 같으면 작은 순서로 정렬
                return a > b;
            }

            return abs(a) > abs(b);
        }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    // priority_queue<자료형, 내부 컨테이너, 비교 연산자> pq;
    priority_queue<int, vector<int>, AbsCompare> pq;

    while(n--){
        int x;
        cin >> x;

        if(x == 0){
            if(pq.empty()){
                cout << "0" << "\n";
            }
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else{
            pq.push(x);
        }
    }

    return 0;
}