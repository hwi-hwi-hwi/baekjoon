#include <iostream>
#include <stack>

using namespace std;

int main(){
    string input;
    getline(cin, input);

    bool inTag = false;  // 태그 <> 안인지
    stack<char> word;  // 단어 뒤집어서 보관

    for(char c : input){
        if(c == '<'){  // 태그 < 시작
            while(!word.empty()){
                cout << word.top();
                word.pop();
            }

            inTag = true;
            cout << c;
        }
        /*
        ✅ if-else 문은 위에서부터 순서대로 검사하며, 처음으로 만족하는 조건만 실행하고 나머지는 무시
        ✅ 순서에 따라 로직이 달라질 수 있음 → 코드 작성할 때 주의해야 함
        */
        else if(c == '>'){  // 태그 > 끝
            inTag = false;
            cout << c;
        }
        else if(inTag){  // 태그 안에 있으면
            cout << c;
        }
        else{  // 태그 <> 말고, 일반 단어
            if(c == ' '){  // 한 단어 끝
                while(!word.empty()){
                    cout << word.top();
                    word.pop();
                }

                cout << " ";
            }
            else{  // stack에 추가
                word.push(c);
            }
        }
    }

    while(!word.empty()){
        cout << word.top();
        word.pop();
    }

    return 0;
}