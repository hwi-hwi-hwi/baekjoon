#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    queue<int> people;
    for(int i = 1; i <= n; i++){
        people.push(i);
    }

    vector<int> ans;
    while(!people.empty()){
        for(int i = 1; i < k; i++){
            // K-1번 큐 맨 앞 원소를 뒤로
            people.push(people.front());
            people.pop();
        }
        // K번째 사람을 ans에 추가
        ans.push_back(people.front());
        people.pop();
    }

    cout << "<";
    for(int i = 0; i < ans.size(); i++){
        if(i != 0){
            cout << ", ";
        }

        cout << ans[i];
    }
    cout << ">";

    return 0;
}