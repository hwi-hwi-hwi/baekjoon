#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<tuple<int, int, int, string>> students;
    for(int i = 0; i < n; i++){
        string name;
        int d, m, y;
        cin >> name >> d >> m >> y;

        students.push_back({y, m, d, name});
    }
    // 정렬: 나이가 많은 순서 -> 나이가 적은 순서
    sort(students.begin(), students.end());

    cout << get<3>(students[n-1]) << "\n";
    cout << get<3>(students[0]) << "\n";

    return 0;
}