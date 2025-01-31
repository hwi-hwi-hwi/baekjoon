#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;

    int max = 0;
    vector<int> result;
    int b = 1;

    while(b <= a){
        int tempA = a;
        int tempB = b;
        vector<int> temp;
        temp.push_back(tempA);
        temp.push_back(tempB);

        while(true){
            int c = tempA - tempB;

            if(c < 0)   break;

            temp.push_back(c);
            tempA = tempB;
            tempB = c;
        }

        if(max < (int)temp.size()){
            max = temp.size();
            result = temp;
        }

        b++;
    }

    cout << result.size() << "\n";
    for(auto i : result){
        cout << i << " ";
    }

    return 0;
}