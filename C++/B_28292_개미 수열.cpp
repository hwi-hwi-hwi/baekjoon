#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n < 3)
        cout << '1';
    else if(n < 6)
        cout << '2';
    else
        cout << '3';

    return 0;
}