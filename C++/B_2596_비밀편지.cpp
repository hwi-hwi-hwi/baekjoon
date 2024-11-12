#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string num[8] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
	char alphabet[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	
	int n;  // 문자의 개수
	cin >> n;
	
	string input;  // 문자의 개수의 여섯 배 만큼의 숫자 입력
	cin >> input;
	
	bool error_found = false;
	int error_position = -1;
	string result = "";  // 결과를 저장할 문자열
	
	for(int i = 0; i < n; i++){
		
		// 6 개씩 분리 
		string segment = input.substr(i*6, 6);
		// 6 개가 num과 일치하는지
		bool matched = false;
		
		for(int j = 0; j < 8; j++){
			
			int mismatch = 0;
			
			for(int k = 0; k < 6; k++){
				
				if(segment[k] != num[j][k])
					mismatch++;
			}
			
			if(mismatch <= 1){
				// 0 또는 1개 차이나면
				result += alphabet[j];
				matched = true;
				break; // 2 번째 for문 탈출 후, 다음 segment 
			}
		}
		
		if(!matched){
			// 2 개 이상 차이나면
			error_found = true;
			error_position = i+1;
			break;  // 1 번째 for문 탈출 
		}	
	}
	
	if(!error_found)	cout << result;
	else	cout << error_position;
	
	return 0;
}
