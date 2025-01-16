#include <iostream>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    int count = 0;

    while(b > a){
        if(b % 2 == 0){
            b /= 2;
            count++;
        }
        else if(b % 10 == 1){
            b /= 10;
            count++;
        }
        else{
            break;
        }
    }

    if(b == a)
        cout << count+1;
    else
        cout << -1;

    return 0;
}