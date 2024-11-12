#include <iostream>
#include <sstream>

using namespace std;

int main(){
	
	string input;
	while(1){
		
		getline(cin, input);
		if(input == "*")	break;
		
		stringstream ss(input);
		string word;
		char first_char = '\0';
		bool is_tautogram = true;
		
		while(ss >> word){
			
			char first_letter = tolower(word[0]);
			if(first_char == '\0'){
				first_char = first_letter;
			}
			else if(first_char != first_letter){
				is_tautogram = false;
				break;
			}
		}
		
		if(is_tautogram)	cout << "Y" << endl;
		else	cout << "N" << endl;
	}
		
	return 0;
}
