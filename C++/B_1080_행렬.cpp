#include <iostream>
#include <vector>

using namespace std;

void flip(vector<vector<int>> &matrix, int x, int y){
    for(int i = x; i < x + 3; i++){
        for(int j = y; j < y + 3; j++){
            // 0은 1로, 1은 0으로 변환
            matrix[i][j] = 1 - matrix[i][j];
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrixA(n, vector<int>(m));
    vector<vector<int>> matrixB(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            matrixA[i][j] = c - '0';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            matrixB[i][j] = c - '0';
        }
    }

    int count = 0;

    for(int i = 0; i < n - 2; i++){  // i+2 < n
        for(int j = 0; j < m -2; j++){  // j+2 < m
            if(matrixA[i][j] != matrixB[i][j]){
                flip(matrixA, i, j);
                count++;
            }
        }
    }

    if(matrixA == matrixB){
        cout << count;
    }
    else{
        cout << "-1";
    }

    return 0;
}