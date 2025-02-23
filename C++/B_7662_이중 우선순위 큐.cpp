#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

class DualPriorityQueue {
    private:
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_map<int, int> count;

    public:
        void insert(int n){
            maxHeap.push(n);
            minHeap.push(n);
            count[n]++;
        }

        void deleteMax(){
            while(!maxHeap.empty() && count[maxHeap.top()] == 0){
                // minHeap에서 이미 제거된 큐 maxHeap에서도 제거하기
                maxHeap.pop();
            }

            if(!maxHeap.empty()){
                // 제거거
                count[maxHeap.top()]--;
                maxHeap.pop();
            }
        }

        void deleteMin(){
            while(!minHeap.empty() && count[minHeap.top()] == 0){
                // maxHeap에서 이미 제거된 큐 minHeap에서도 제거하기
                minHeap.pop();
            }

            if(!minHeap.empty()){
                count[minHeap.top()]--;
                minHeap.pop();
            }
        }

        void printResult(){
            while(!maxHeap.empty() && count[maxHeap.top()] == 0){
                maxHeap.pop();
            }

            while(!minHeap.empty() && count[minHeap.top()] == 0){
                minHeap.pop();
            }

            if(maxHeap.empty() && minHeap.empty()){
                cout << "EMPTY" << "\n";
            }
            else{
                cout << maxHeap.top() << ' ' << minHeap.top() << "\n";
            }
        }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        DualPriorityQueue dpq;

        while(k--){
            char c;
            int n;
            cin >> c >> n;

            if(c == 'D'){
                if(n == 1){  // 최댓값 제거
                    dpq.deleteMax();
                }
                else if(n == -1){  // 최솟값 제거
                    dpq.deleteMin();
                }
            }
            else if(c == 'I'){
                dpq.insert(n);
            }
        }

        dpq.printResult();
    }

    return 0;
}