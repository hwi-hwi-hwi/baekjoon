#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string trimSpaces(const string &s) {
    size_t start = s.find_first_not_of(" ");
    size_t end = s.find_last_not_of(" ");
    return s.substr(start, end - start + 1);
}

string removeSpaces(const string &s){
	
	string result = s;
	result.erase(remove(result.begin(), result.end(), ' '), result.end());
	
	return result;
}
int main(){
	
	string input;
	getline(cin, input);
	
	vector<string> sentences;
	string temp;
	for(char c : input){
		
		temp += c;
		if(c == '.' || c == '?'){
			temp = trimSpaces(temp);
			sentences.push_back(temp);
			temp = "";
		}
	}
	
	for(string s : sentences){
		
		string noSpaces = removeSpaces(s);
		
		if(noSpaces.find("Whatis") == 0 && noSpaces.back() == '?'){
			s.replace(s.find("What is"), 7, "Forty-two");
			s.back() = '.';
			
			cout << s << "\n";
		}
	}
	
	return 0;
}
