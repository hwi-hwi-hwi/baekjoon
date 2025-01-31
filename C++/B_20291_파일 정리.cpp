#include <iostream>
#include <string>
#include <map>

using namespace std;


int main(){
    int n;
    cin >> n;

    map<string, int> extensionCount;
    while(n--){
        string fileName;
        cin >> fileName;

        // 확장자 추출 ('.' 이후 부분)
        string extension = fileName.substr(fileName.find_last_of('.') + 1);

        extensionCount[extension]++;
    }

    for(const auto& pair : extensionCount){
        cout << pair.first << " " << pair.second << "\n";
    }

    return 0;
}