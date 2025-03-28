#include <iostream>

using namespace std;

int main(){
    long long k;
    cin >> k;

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long left = a * k + b;
    long long right = c * k + d;

    if(left == right){
        cout << "Yes" << " " << left << "\n";
    }
    else{
        cout << "No" << "\n";
    }

    return 0;
}