#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> sequence;

void backtracking(int start){
    if(sequence.size() == (size_t) m){
        for(int a : sequence){
            cout << a << " ";
        }
        cout << "\n";

        return;
    }

    for(int i = start; i <= n; i++){
        sequence.push_back(i);
        backtracking(i);
        sequence.pop_back();
    }
}

int main(){
    cin >> n >> m;

    backtracking(1);

    return 0;
}