#include <iostream>
#include <queue>

using namespace std;

int t;
bool visited[10000];

string bfs(int a, int b){
    // 현재 숫자, 명령어 문자열
    queue<pair<int, string>> q;
    // 초기 상태: A를 큐에 추가하고, 명령어 문자열은 비어있음
    q.push({a, ""});
    visited[a] = true;

    while(!q.empty()){
        int num = q.front().first;
        string cmd = q.front().second;
        q.pop();

        if(num == b)    return cmd;

        // D S L R
        int d = (num * 2) % 10000;
        if(!visited[d]){  // 방문하지 않았으면 큐에 추가
            visited[d] = true;
            q.push({d, cmd + "D"});
        }

        int s = (num == 0) ? 9999 : num - 1;
        if(!visited[s]){
            visited[s] = true;
            q.push({s, cmd + "S"});
        }

        int l = ((num % 1000) * 10) + (num / 1000);
        if(!visited[l]){
            visited[l] = true;
            q.push({l, cmd + "L"});
        }

        int r = (num / 10) + ((num % 10) * 1000);
        if(!visited[r]){
            visited[r] = true;
            q.push({r, cmd + "R"});
        }
    }

    return "";
}

int main(){
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        fill(visited, visited + 10000, false);

        cout << bfs(a, b) << "\n";
    }

    return 0;
}