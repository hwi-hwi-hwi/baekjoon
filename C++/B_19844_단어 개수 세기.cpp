#include <iostream>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

int main(){
	
	string input;
	getline(cin, input);
	
	// 1. 띄어쓰기와 하이픈으로 기본 단어를 분리
	stringstream ss(input);
	string word;
	vector<string> words;
	
	// ' '와 '-' 기준으로 나누기
	while(getline(ss, word, ' ')){
		
		stringstream ss2(word);
		string subword;
		
		while(getline(ss2, subword, '-')){
			
			words.push_back(subword);
		}
	} 
	
	regex pattern("^(c|j|n|m|t|s|l|d|qu)'[aeiouh].*");
	
	int count(0);
	for(string&w : words){
		
		if(regex_match(w, pattern)){
			count += 2;
		}
		else
			count++;
	}
	
	cout << count;	
	
	return 0;
}
