#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> classes(n);

    for(int i = 0; i < n; i ++){
        cin >> classes[i].first >> classes[i].second;
    }
    sort(classes.begin(), classes.end());

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(const auto& c: classes){
        int start = c.first;
        int end = c.second;

        if(!minHeap.empty() && minHeap.top() <= start){
            minHeap.pop();
        }

        minHeap.push(end);
    }

    cout << minHeap.size();

    return 0;
}