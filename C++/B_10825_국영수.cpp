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
        int k, e, m;
        string name;

        cin >> name >> k >> e >> m;
        students.push_back({k, e, m, name});
    }
    // 1. 국어 내림차순 2. 영어 오름차순 3. 수학 내림차순 4. 이름 오름차순
    sort(students.begin(), students.end(), [](const auto& a, const auto& b){
        if(get<0>(a) != get<0>(b)){
            return get<0>(a) > get<0>(b);
        }

        if(get<1>(a) != get<1>(b)){
            return get<1>(a) < get<1>(b);
        }

        if(get<2>(a) != get<2>(b)){
            return get<2>(a) > get<2>(b);
        }

        return get<3>(a) < get<3>(b);
    });

    for(const auto& student : students){
        cout << get<3>(student) << "\n";
    }

    return 0;
}