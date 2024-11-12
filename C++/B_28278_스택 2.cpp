#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n;
    cin >> n;
    
    stack<int> stk;
    while (n--) {
        
        int x;
        cin >> x;
        
        if (x == 1) {
            int y;
            cin >> y;
            stk.push(y);
            
        } else if (x == 2) {
            if (stk.empty())
                cout << "-1" << "\n";
            else {
                cout << stk.top() << "\n";
                stk.pop();
            }
            
        } else if (x == 3) {
            cout << stk.size() << "\n";
            
        } else if (x == 4) {
            if (stk.empty())
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
                
        } else if (x == 5) {
            if (stk.empty())
                cout << "-1" << "\n";
            else
                cout << stk.top() << "\n";
        }
    }
    
    return 0;
}
