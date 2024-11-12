#include <iostream>

using namespace std;

int main(){
	
	string input;
	while(getline(cin, input)){
		
		if(input == "#")		break;
		
		int count(0);
		for(int i = 0; i < input.length(); i++){
			
			if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')
				count++;
		}
		cout << count << endl;
	}
	
	return 0;
}
