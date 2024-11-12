#include <iostream>

using namespace std;

int main() {
	
    int x, y, a, b;
    cin >> x >> y;
    
    // a + b = x (합)
    // a - b = y (차)
    // x + y = 2a
    // x - y = 2b
    if ((x + y) % 2 != 0 || (x - y) % 2 != 0 || x < y) {
        cout << "-1";
        return 0;
    }

    a = (x + y) / 2;
    b = (x - y) / 2;
    
    // a와 b는 음수가 될 수 없다.
    if (a >= 0 && b >= 0) {
        cout << a << ' ' << b;
    } else {
        cout << "-1";
    }
    
    return 0;
}

